#include "client.h"
#include "textMessage.pb.h"
#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <unistd.h>
#include <zmq.hpp>

std::string getSocketPort(const zmq::socket_t &sock)
{
    char   port[1024];
    size_t port_size = sizeof(port);
    sock.getsockopt(ZMQ_LAST_ENDPOINT, &port, &port_size);
    return std::string{port};
}

int main()
{
    char   port[1024];
    size_t port_size = sizeof(port);
    //  Prepare our context and socket
    zmq::context_t context(1);
    zmq::socket_t  socket(context, ZMQ_REP);

    try {
        socket.bind("tcp://*:*");
    } catch (zmq::error_t &e) {
        std::cerr << "couldn't bind to socket (client): " << e.what();
        std::terminate();
    }

    std::string portInUse = getSocketPort(socket);
    std::cout << "Starting server on port: " << portInUse << std::endl;
    std::thread(client, portInUse).detach();

    while (true) {
        zmq::message_t request;

        //  Wait for next request from client
        socket.recv(&request);
        textMessage::textMessage receivedMsg{};

        receivedMsg.ParseFromArray(request.data(), request.size());

        std::cout << "\t(serv) Received: " << receivedMsg.msg() << ", id: " << receivedMsg.id()
                  << std::endl;

        //  Do some 'work'
        sleep(1);

        //  Send reply back to client
        textMessage::textMessage replyMsg{};
        replyMsg.set_msg("id: " + std::to_string(receivedMsg.id()) + ", msg: " + receivedMsg.msg());
        zmq::message_t reply(replyMsg.ByteSizeLong());
        std::string    str;
        replyMsg.SerializeToString(&str);

        memcpy(reply.data(), str.c_str(), replyMsg.ByteSizeLong());
        socket.send(reply);
    }
    return 0;
}