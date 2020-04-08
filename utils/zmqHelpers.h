//
// Created by sebastian on 02/04/2020.
//

#ifndef PROTOTUT_ZMQHELPERS_H
#define PROTOTUT_ZMQHELPERS_H
#include <iostream>
#include <zmq.hpp>

namespace zhelpers {
void bind_to_random_port(zmq::socket_t &socket);

std::string get_socket_port(const zmq::socket_t &sock);

template <typename T>
T receive_proto(zmq::socket_t &socket);

template <typename T>
void send_proto(zmq::socket_t &socket, const T &proto);

} // namespace zhelpers

#endif // PROTOTUT_ZMQHELPERS_H
