//
// Created by sebastian on 02/04/2020.
//

#ifndef PROTOTUT_ZMQHELPERS_H
#define PROTOTUT_ZMQHELPERS_H

namespace zhelpers {
std::string getSocketPort(const zmq::socket_t &sock)
{
    char   port[1024];
    size_t port_size = sizeof(port);
    sock.getsockopt(ZMQ_LAST_ENDPOINT, &port, &port_size);
    return std::string{port};
}
} // namespace zhelpers

#endif // PROTOTUT_ZMQHELPERS_H
