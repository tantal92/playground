//
//  Weather update client in C++
//  Connects SUB socket to tcp://localhost:5556
//  Collects weather updates and finds avg temp in zipcode
//
//  Olivier Chamoux <olivier.chamoux@fr.thalesgroup.com>
//

#pragma once
#include "weather.pb.h"
#include "zmqHelpers.h"
#include <chrono>
#include <iostream>
#include <sstream>
#include <zmq.hpp>

void wuclient(const std::string &clientId, const std::string &portToConnect)
{
    zmq::context_t context(1);

    //  Socket to talk to server
    std::cout << "Collecting updates from weather server on " << portToConnect << std::endl;
    zmq::socket_t subscriber(context, ZMQ_SUB);
    subscriber.connect(portToConnect);

    //  Subscribe to zipcode, default is NYC, 10001
    const char *filter = "10001 ";
    subscriber.setsockopt(ZMQ_SUBSCRIBE, filter, strlen(filter));

    //  Process 100 updates
    int                                   update_nbr;
    long                                  total_temp = 0;
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (update_nbr = 0; update_nbr < 100; update_nbr++) {

        zmq::message_t update;
        subscriber.recv(&update);
        weather::weather receivedMsg{};
        std::string      zipcode, proto;

        std::istringstream iss(static_cast<char *>(update.data()));
        iss >> zipcode >> proto;

        receivedMsg.ParseFromString(proto);
        total_temp += receivedMsg.temperature();
    }
    std::cout << "Average temperature for zipcode '" << filter << "' was "
              << (int)(total_temp / update_nbr) << "F" << std::endl;
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "Time difference = "
              << std::chrono::duration_cast<std::chrono::seconds>(end - begin).count() << "[s]"
              << std::endl;
    std::cout << "Time difference = "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()
              << "[ms]" << std::endl;
}
