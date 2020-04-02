//
//  Hello World client in C++
//  Connects REQ socket to tcp://localhost:5555
//  Sends "Hello" to server, expects "World" back
//
#pragma once
#include "textMessage.pb.h"
#include "zmqHelpers.h"
#include <iostream>
#include <string>
#include <zmq.hpp>

textMessage::textMessage createMessage(const std::string &text, const int id)
{
    textMessage::textMessage msg{};
    msg.set_msg(text);
    msg.set_id(id);
    return msg;
}

void client(const std::string &clientId, const std::string &portToConnect)
{
    //  Prepare our context and socket
    zmq::context_t context(1);
    zmq::socket_t  socket(context, ZMQ_REQ);
    socket.connect(portToConnect.c_str());

    //  Do 10 requests, waiting each time for a response
    for (int request_nbr = 0; request_nbr != 10; request_nbr++) {
        textMessage::textMessage msg = createMessage("proto", request_nbr);

        std::cout << "(cId: " << clientId << ")"
                  << ", sending: " << msg.msg() << ", " << msg.id() << std::endl;

        zhelpers::sendProto(socket, msg);

        //  Get the reply.
        auto reply = zhelpers::receiveProto<textMessage::serverResponse>(socket);
        std::cout << "(cId: " << clientId << ")"
                  << ", received: " << reply.msg() << std::endl;
    }
}
