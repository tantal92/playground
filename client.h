//
//  Hello World client in C++
//  Connects REQ socket to tcp://localhost:5555
//  Sends "Hello" to server, expects "World" back
//
#pragma once
#include "textMessage.pb.h"
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

void client(const std::string &portToConnect)
{
    //  Prepare our context and socket
    zmq::context_t context(1);
    zmq::socket_t  socket(context, ZMQ_REQ);
    std::cout << "Connecting to  " << portToConnect << std::endl;
    socket.connect(portToConnect.c_str());

    //  Do 10 requests, waiting each time for a response
    for (int request_nbr = 0; request_nbr != 10; request_nbr++) {
        textMessage::textMessage msg = createMessage("proto", request_nbr);
        auto                     msgSize = msg.ByteSizeLong();

        std::string str;
        msg.SerializeToString(&str);

        zmq::message_t request(msgSize);
        memcpy(request.data(), str.c_str(), msgSize);
        std::cout << "Sending: " << msg.msg() << ", " << msg.id() << std::endl;
        socket.send(request);

        //  Get the reply.
        zmq::message_t reply;
        socket.recv(&reply);
        textMessage::serverResponse res{};
        res.ParseFromArray(reply.data(), reply.size());
        std::cout << "Received: " << res.msg() << std::endl;
    }
}
