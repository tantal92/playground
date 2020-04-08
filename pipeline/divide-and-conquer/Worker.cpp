//
// Created by sebastian on 07/04/2020.
//

#include "Worker.h"

#include <utility>
Worker::Worker(std::string id, std::string mDistributorAddr)
    : m_Id{std::move(id)}, m_DistributorAddr{std::move(mDistributorAddr)}
{
}
void Worker::operator()() const {}
