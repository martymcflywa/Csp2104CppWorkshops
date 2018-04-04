#include "stdafx.h"
#include "Worker.h"

Worker::Worker(int id, const std::string& name, double rate) : Employee(id, name, rate)
{
}

bool Worker::isManager() const
{
    return false;
}

bool Worker::isWorker() const
{
    return true;
}
