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
    subscriber.setsockopt(ZMQ_SUBSCRIBE, NULL, 0);

    //  Process 100 updates
    int  update_nbr;
    long total_temp = 0;
    for (update_nbr = 0; update_nbr < 100;) {

        auto update = zhelpers::receiveProto<weather::weather>(subscriber);
        if (update.zipcode() == 10001) {
            std::string    str;
            update.SerializeToString(&str);
            std::cout << str << "\n";
            total_temp += update.temperature();
            update_nbr++;
        }
    }
    std::cout << "Average temperature for zipcode '" << filter << "' was "
              << (int)(total_temp / update_nbr) << "F" << std::endl;
}
