#include "client.h"
#include "textMessage.pb.h"
#include "zmqHelpers.h"
#include <iostream>
#include <string>
#include <thread>
#include <unistd.h>
#include <zmq.hpp>

int main()
{
    //  Prepare our context and socket
    zmq::context_t context(1);
    zmq::socket_t  socket(context, ZMQ_REP);

    try {
        socket.bind("tcp://*:*");
    } catch (zmq::error_t &e) {
        std::cerr << "couldn't bind to socket (client): " << e.what();
        std::terminate();
    }

    std::string portInUse = zhelpers::getSocketPort(socket);
    std::cout << "Starting server on port: " << portInUse << std::endl;
    std::thread(client, "1", portInUse).detach();
    // std::thread(client, "2", portInUse).detach();

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