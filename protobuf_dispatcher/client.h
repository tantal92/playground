//
//  Hello World client in C++
//  Connects REQ socket to tcp://localhost:5555
//  Sends "Hello" to server, expects "World" back
//
#pragma once
#include "message.pb.h"
#include "zmqHelpers.h"
#include <iostream>
#include <string>
#include <zmq.hpp>

pb::MessageBase createMessage(const int id)
{
    pb::MessageBase msg{};
    msg.set_messageid(id);
    if (id == 0) {
        pb::type_one t1;
        t1.set_msg("type one message");
        msg.mutable_actualmessage()->PackFrom(t1);
    } else {
        pb::type_two t2;
        t2.set_msg("type two message");
        msg.mutable_actualmessage()->PackFrom(t2);
    }
    return msg;
}

void client(const std::string &clientId, const std::string &portToConnect)
{
    //  Prepare our context and socket
    zmq::context_t context(1);
    zmq::socket_t  socket(context, ZMQ_PUSH);
    socket.connect(portToConnect.c_str());

    //  Do 10 requests, waiting each time for a response
    for (int request_nbr = 0; request_nbr != 2; request_nbr++) {
        pb::MessageBase msg = createMessage(request_nbr);

        std::cout << "(cId: " << clientId << ")"
                  << ", sending: " << msg.messageid() << std::endl;

        zhelpers::send_proto(socket, msg);

        //        //  Get the reply.
        //        auto reply = zhelpers::receive_proto<textMessage::serverResponse>(socket);
        //        std::cout << "(cId: " << clientId << ")"
        //                  << ", received: " << reply.msg() << std::endl;
    }
}
