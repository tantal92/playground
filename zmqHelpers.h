//
// Created by sebastian on 02/04/2020.
//

#ifndef PROTOTUT_ZMQHELPERS_H
#define PROTOTUT_ZMQHELPERS_H
#include <zmq.hpp>

namespace zhelpers {
std::string getSocketPort(const zmq::socket_t &sock)
{
    char   port[1024];
    size_t port_size = sizeof(port);
    sock.getsockopt(ZMQ_LAST_ENDPOINT, &port, &port_size);
    return std::string{port};
}

void bindToRandomPort(zmq::socket_t &socket)
{
    try {
        socket.bind("tcp://*:*");
    } catch (zmq::error_t &e) {
        std::cerr << "couldn't bind to socket (client): " << e.what();
        std::terminate();
    }
}

template <typename T>
T receiveProto(zmq::socket_t &socket)
{
    zmq::message_t request;
    socket.recv(&request);
    T receivedMsg{};
    receivedMsg.ParseFromArray(request.data(), request.size());
    return receivedMsg;
}

template <typename T>
void sendProto(zmq::socket_t &socket, const T &proto)
{
    auto           protoSize = proto.ByteSizeLong();
    zmq::message_t msg(protoSize);
    std::string    str;
    proto.SerializeToString(&str);
    memcpy(msg.data(), str.c_str(), protoSize);
    socket.send(msg);
}

} // namespace zhelpers

#endif // PROTOTUT_ZMQHELPERS_H
