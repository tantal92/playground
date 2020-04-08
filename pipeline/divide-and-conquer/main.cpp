//
// Created by sebastian on 07/04/2020.
//

#include "TaskDistributor.h"
//#include "utils/zhelpers.hpp"
#include "utils/zmqHelpers.h"
#include <iostream>
#include <string>
#include <thread>
#include <zmq.h>

void waitForWorkers(zmq::socket_t &workerReady, int numberOfWorkers)
{
    try {
        for (int i = 0; i < numberOfWorkers; i++) {
            zmq::message_t messageReady;
            workerReady.recv(&messageReady);
            std::cout << "(Manager) worker ready received!" << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << "wait for workers, e: " << e.what() << std::endl;
    }
}

int main()
{
    zmq::context_t  context(1);
    zmq::socket_t workerReady(context, ZMQ_PULL);
    zhelpers::bind_to_random_port(workerReady);
    std::string workerPort = zhelpers::get_socket_port(workerReady);

    TaskDistributor taskDistributor{context, workerPort};

    // run distributor
    std::thread t(&TaskDistributor::run, &taskDistributor);
    waitForWorkers(workerReady, 3);

    std::cout<< "manager thread id: " << std::this_thread::get_id()<< ", distributor thread id: " << t.get_id() << std::endl;
    t.join();
}
