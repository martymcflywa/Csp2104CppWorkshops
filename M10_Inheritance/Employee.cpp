#include "stdafx.h"
#include "Employee.h"

using namespace std;

Employee::Employee(
        const unsigned id, 
        const string& name,
        const double rate)
{
    _id = id;
    _name = name;
    _rate = rate;
}

unsigned Employee::getId() const
{
    return _id;
}

std::string Employee::getName() const
{
    return _name;
}

double Employee::getRate() const
{
    return _rate;
}

bool Employee::isManager() const
{
    return false;
}

bool Employee::isWorker() const
{
    return false;
}