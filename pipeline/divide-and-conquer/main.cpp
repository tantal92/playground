//
// Created by sebastian on 07/04/2020.
//

#include "TaskDistributor.h"
#include "utils/zmqHelpers.h"
#include <iostream>
#include <map>
#include <string>
#include <thread>
#include <zmq.h>

using isServiceReady = bool;
using serializedThreadId = std::string;
//using serviceName = std::string;
//using servideId = std::pair<serializedThreadId, serviceName>;


int main()
{
    std::map<serializedThreadId, isServiceReady> services;
    zmq::context_t context(1);

    zmq::socket_t manager(context, ZMQ_PULL);
    zhelpers::bind_to_random_port(manager);
    std::string managerEndpoint = zhelpers::get_socket_port(manager);

    TaskDistributor taskDistributor{context};

    // run distributor
    std::thread t(&TaskDistributor::run, &taskDistributor);
    services.insert(std::pair(zhelpers::threadIdToString(t.get_id()), false));

    t.join();
}
