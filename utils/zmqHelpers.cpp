#include "utils/zmqHelpers.h"

namespace zhelpers {
void bind_to_random_port(zmq::socket_t &socket)
{
    try {
        socket.bind("tcp://*:*");
    } catch (zmq::error_t &e) {
        std::cerr << "couldn't bind to socket (client): " << e.what();
        std::terminate();
    }
}

std::string get_socket_port(const zmq::socket_t &sock)
{
    char   port[1024];
    size_t port_size = sizeof(port);
    sock.getsockopt(ZMQ_LAST_ENDPOINT, &port, &port_size);
    return std::string{port};
}

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

} // namespace zhelpers