//
// Created by sebastian on 02/04/2020.
//

#ifndef PROTOTUT_ZMQHELPERS_H
#define PROTOTUT_ZMQHELPERS_H
#include <string>
#include <thread>
#include <zmq.hpp>

namespace zhelpers {
void bind_to_random_port(zmq::socket_t &socket);

std::string get_socket_port(const zmq::socket_t &sock);

template <typename T>
T receive_proto(zmq::socket_t &socket)
{
    zmq::message_t request;
    socket.recv(&request);
    T receivedMsg{};
    receivedMsg.ParseFromArray(request.data(), request.size());
    return receivedMsg;
}

template <typename T>
void send_proto(zmq::socket_t &socket, const T &proto)
{
    auto           protoSize = proto.ByteSizeLong();
    zmq::message_t msg(protoSize);
    std::string    str;
    proto.SerializeToString(&str);
    memcpy(msg.data(), str.c_str(), protoSize);
    socket.send(msg);
}

std::string threadIdToString(std::thread::id id);

} // namespace zhelpers

#endif // PROTOTUT_ZMQHELPERS_H
