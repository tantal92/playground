//
//  Task worker in C++
//  Connects PULL socket to tcp://localhost:5557
//  Collects workloads from ventilator via that socket
//  Connects PUSH socket to tcp://localhost:5558
//  Sends results to sink via that socket
//
//  Olivier Chamoux <olivier.chamoux@fr.thalesgroup.com>
//
#pragma once
#include "utils/zhelpers.hpp"
#include <string>


void worker(const std::string &workerId, const std::string &distributorAddr, const std::string &managerAddr)
{
    zmq::context_t context(1);

    //  Socket to receive messages on
    zmq::socket_t receiver(context, ZMQ_PULL);
    receiver.connect(distributorAddr);

    //  Socket to send messages to
    zmq::socket_t sender(context, ZMQ_PUSH);
    sender.connect("tcp://localhost:5558");

    // Send Ready to manager
    zmq::socket_t workerReady(context, ZMQ_PUSH);
    workerReady.connect(managerAddr);
    zmq::message_t messageReady{0};
    workerReady.send(messageReady);

    std::cout << "Worker " + workerId + " ready!\n" << std::flush;
    //  Process tasks forever
    while (1) {

        zmq::message_t message;
        int            workload; //  Workload in msecs

        receiver.recv(&message);
        std::string smessage(static_cast<char *>(message.data()), message.size());

        std::istringstream iss(smessage);
        iss >> workload;

        //  Do the work
        s_sleep(workload);

        //  Send results to sink
        message.rebuild();
        sender.send(message);

        //  Simple progress indicator for the viewer
        std::cout << " " + workerId + " " << std::flush;
    }
}