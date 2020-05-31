#include "client.h"
#include "message.pb.h"
#include "zmqHelpers.h"
#include <iostream>
#include <string>
#include "ProtobufDispatcher2.h"
#include <thread>
#include <unistd.h>
#include <map>
#include <zmq.hpp>

void callbackOne(pb::type_one* query);
void callbackTwo(pb::type_two* query);

int main()
{
    //  Prepare our context and socket
    zmq::context_t context(1);
    zmq::socket_t  socket(context, ZMQ_PULL);
    zhelpers::bind_to_random_port(socket);
    std::string portInUse = zhelpers::get_socket_port(socket);

    std::cout << "Starting server on port: " << portInUse << std::endl;
    std::thread(client, "1", portInUse).detach();
    // std::thread(client, "2", portInUse).detach();

    ProtobufDispatcher dispatcher;
    dispatcher.registerMessageCallback<pb::type_one>(callbackOne);
    dispatcher.registerMessageCallback<pb::type_two>(callbackTwo);

    while (true) {
        auto receivedMsg = zhelpers::receive_proto<pb::MessageBase>(socket);

        std::cout << "\t(serv) Received: " << receivedMsg.messageid() << ", desc:" << pb::MessageBase::descriptor();

        dispatcher.onMessage(&receivedMsg);

//        if (receivedMsg.actualmessage().Is<pb::type_one>()) {
//            pb::type_one t1;
//            receivedMsg.actualmessage().UnpackTo(&t1);
//            dispatcher.onMessage(&t1);
//        } else {
//            pb::type_two t2;
//            receivedMsg.actualmessage().UnpackTo(&t2);
//            dispatcher.onMessage(&t2);
//        }

        //  Do some 'work'
        sleep(1);

        //        //  Send reply back to client
        //        textMessage::serverResponse replyMsg{};
        //        replyMsg.set_msg("id: " + std::to_string(receivedMsg.id()) + ", msg: " +
        //        receivedMsg.msg());
        //
        //        zhelpers::send_proto(socket, replyMsg);
    }
    return 0;
}

void callbackOne(pb::type_one* query)
{
    std::cout << "msg1: " << query->GetTypeName() << std::endl;
    std::cout << query->msg() << ", desc:" << pb::type_one::descriptor() <<"\n";
}

void callbackTwo(pb::type_two* query)
{
    std::cout << "msg2: " << query->GetTypeName() << std::endl;
    std::cout << query->msg() << ", desc:" << pb::type_two::descriptor() <<"\n";
}