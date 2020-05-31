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
    TaskDistributor(zmq::context_t &context);
    void               run();

  private:
    void          bindSocket();
    void          runWorkers(int number_of_workers);
    zmq::socket_t m_Socket;
    zmq::socket_t m_Sink;
};

#endif // PROTOTUT_TASKDISTRIBUTOR_H
