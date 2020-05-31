//
// Created by sebastian on 07/04/2020.
//

#include "TaskDistributor.h"
#include "tasksink.h"
#include "taskwork.h"
#include "utils/zmqHelpers.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <unistd.h>
#include <utils/zhelpers.hpp>
#include <zmq.hpp>

TaskDistributor::TaskDistributor(zmq::context_t &context)
    : m_Socket{context, ZMQ_PUSH}, m_Sink{context, ZMQ_PUSH}
{
}

void TaskDistributor::run()
{
    bindSocket();
    // wait for workers and tasksink... refactor to receive msg ready from them
    runWorkers(3);
    std::thread t_sink{tasksink};
    sleep(2);

    std::cout << "Sending tasks to workers...\n" << std::endl;

    //  The first message is "0" and signals start of batch

    m_Sink.connect("tcp://localhost:5558");
    zmq::message_t message(2);
    memcpy(message.data(), "0", 1);
    m_Sink.send(message);

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
        m_Socket.send(message);
    }
    std::cout << "Total expected cost: " << total_msec << " msec" << std::endl;
    t_sink.join();
    sleep(1); //  Give 0MQ time to deliver
}
void TaskDistributor::bindSocket()
{
    // bind socket
    //  Socket to send messages on
    zhelpers::bind_to_random_port(m_Socket);
}

void TaskDistributor::runWorkers(int number_of_workers)
{
    for (int i = 0; i < number_of_workers; i++)
        std::thread(worker, std::to_string(i + 1), zhelpers::get_socket_port(m_Socket)).detach();
}
