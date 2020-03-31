#pragma once

#include "textMessage.pb.h"
#include <chrono>
#include <iostream>
#include <string>
#include <unistd.h>
#include <zmq.hpp>

void server()
{
    //  Prepare our context and socket
    zmq::context_t context(1);
    zmq::socket_t  socket(context, ZMQ_REP);
    socket.bind("tcp://*:5555");

    while (true) {
        zmq::message_t request;

        //  Wait for next request from client
        socket.recv(&request);
        textMessage::textMessage receivedMsg{};

        receivedMsg.ParseFromArray(request.data(), request.size());

        std::cout << "Received: " << receivedMsg.msg() << ", id: " << receivedMsg.id() << std::endl;

        //  Do some 'work'
        sleep(1);

        //  Send reply back to client
        textMessage::textMessage replyMsg{};
        replyMsg.set_msg(
            std::to_string(std::chrono::system_clock::now().time_since_epoch().count()));
        zmq::message_t reply(replyMsg.ByteSizeLong());
        std::string    str;
        replyMsg.SerializeToString(&str);

        memcpy(reply.data(), str.c_str(), replyMsg.ByteSizeLong());
        socket.send(reply);
    }
    return 0;
}