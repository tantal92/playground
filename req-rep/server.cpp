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
    zhelpers::bindToRandomPort(socket);
    std::string portInUse = zhelpers::getSocketPort(socket);

    std::cout << "Starting server on port: " << portInUse << std::endl;
    std::thread(client, "1", portInUse).detach();
    // std::thread(client, "2", portInUse).detach();

    while (true) {
        auto receivedMsg = zhelpers::receiveProto<textMessage::textMessage>(socket);

        std::cout << "\t(serv) Received: " << receivedMsg.msg() << ", id: " << receivedMsg.id()
                  << std::endl;

        //  Do some 'work'
        sleep(1);

        //  Send reply back to client
        textMessage::serverResponse replyMsg{};
        replyMsg.set_msg("id: " + std::to_string(receivedMsg.id()) + ", msg: " + receivedMsg.msg());

        zhelpers::sendProto(socket, replyMsg);
    }
    return 0;
}