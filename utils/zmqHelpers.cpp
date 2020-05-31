#include "zmqHelpers.h"
#include <sstream>
#include <iostream>

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

std::string threadIdToString(std::thread::id id){
    std::stringstream ss;
    ss << id;
    return ss.str();
}

} // namespace zhelpers