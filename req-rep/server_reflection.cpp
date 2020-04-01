#include "textMessage.pb.h"
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>
#include <zmq.hpp>

int main()
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
        // parse
        receivedMsg.ParseFromArray(request.data(), request.size());

        // get the descriptor
        const google::protobuf::Descriptor *descriptor = receivedMsg.GetDescriptor();

        // find the fields
        const google::protobuf::FieldDescriptor *msg_field = descriptor->FindFieldByName("msg");
        const google::protobuf::FieldDescriptor *id_field = descriptor->FindFieldByName("id");

        // get reflection
        const google::protobuf::Reflection *reflection = receivedMsg.GetReflection();

        const std::string receivedFields =
            "receivedMsg: " + reflection->GetString(receivedMsg, msg_field) +
            ", id: " + std::to_string(reflection->GetInt32(receivedMsg, id_field));

        std::cout << "Received: " << receivedFields << std::endl;

        //  Do some 'work'
        sleep(1);

        //  Send reply back to client
        textMessage::serverResponse replyMsg{};
        replyMsg.set_msg("sdfsdfsd");
        zmq::message_t reply(replyMsg.ByteSizeLong());
        std::string    str;
        replyMsg.SerializeToString(&str);

        memcpy(reply.data(), str.c_str(), replyMsg.ByteSizeLong());
        socket.send(reply);
    }
    return 0;
}