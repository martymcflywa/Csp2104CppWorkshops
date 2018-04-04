#include "stdafx.h"
#include "Manager.h"

Manager::Manager(int id, const std::string& name, double role) : Employee(id, name, role)
{
}

bool Manager::isManager() const
{
    return true;
}

bool Manager::isWorker() const
{
    return false;
}
