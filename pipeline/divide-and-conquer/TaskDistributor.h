//
// Created by sebastian on 07/04/2020.
//

#ifndef PROTOTUT_TASKDISTRIBUTOR_H
#define PROTOTUT_TASKDISTRIBUTOR_H

#include <string>
#include <zmq.h>
#include <zmq.hpp>

class TaskDistributor
{
  public:
    TaskDistributor(zmq::context_t &context, std::string &workerAddr);

    const std::string &getPort() const;
    void               run();

  private:
    void          bindSocket();
    void          runWorkers(int number_of_workers);
    zmq::socket_t m_Socket;
    zmq::socket_t m_Sink;
    std::string   m_Port;
    std::string   m_WorkerAddr;
};

#endif // PROTOTUT_TASKDISTRIBUTOR_H
