//
//  Task ventilator in C++
//  Binds PUSH socket to tcp://localhost:5557
//  Sends batch of tasks to workers via that socket
//
//  Olivier Chamoux <olivier.chamoux@fr.thalesgroup.com>
//
#include "tasksink.h"
#include "taskwork.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <unistd.h>
#include <zmq.hpp>

#define within(num) (int)((float)num * random() / (RAND_MAX + 1.0))

void run_workers(int number_of_workers);

int main(int argc, char *argv[])
{
    zmq::context_t context(1);

    //  Socket to send messages on
    zmq::socket_t sender(context, ZMQ_PUSH);
    sender.bind("tcp://*:5557");
    run_workers(3);
    std::thread t_sink{tasksink};
    // wait for workers and tasksink... refactor to receive msg ready from them
    sleep(2);

    std::cout << "Sending tasks to workers...\n" << std::endl;

    //  The first message is "0" and signals start of batch
    zmq::socket_t sink(context, ZMQ_PUSH);
    sink.connect("tcp://localhost:5558");
    zmq::message_t message(2);
    memcpy(message.data(), "0", 1);
    sink.send(message);

    //  Initialize random number generator
    srandom((unsigned)time(NULL));

    //  Send 100 tasks
    int total_msec = 0; //  Total expected cost in msecs
    for (int task_nbr = 0; task_nbr < 100; task_nbr++) {
        int workload;
        //  Random workload from 1 to 100msecs
        workload = within(100) + 1;
        total_msec += workload;

        message.rebuild(10);
        memset(message.data(), '\0', 10);
        sprintf((char *)message.data(), "%d", workload);
        sender.send(message);
    }
    std::cout << "Total expected cost: " << total_msec << " msec" << std::endl;
    t_sink.join();
    sleep(1); //  Give 0MQ time to deliver

    return 0;
}

void run_workers(int number_of_workers)
{
    for (int i = 0; i < number_of_workers; i++)
        std::thread(worker, std::to_string(i + 1)).detach();
}