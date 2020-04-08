//
// Created by sebastian on 07/04/2020.
//

#ifndef PROTOTUT_WORKER_H
#define PROTOTUT_WORKER_H

#include "utils/zhelpers.hpp"
#include <string>
#include <zmq.h>

class Worker
{
  public:
    Worker(std::string id, std::string mDistributorAddr);
    void operator()() const;

  private:
    const std::string m_Id;
    const std::string m_DistributorAddr;
};

#endif // PROTOTUT_WORKER_H
