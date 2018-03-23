#include "stdafx.h"
#include "Employee.h"

using namespace std;

Employee::Employee(
        const unsigned id, 
        const string& name,
        const string& role, 
        const double rate)
{
    _id = id;
    _name = name;
    _role = role;
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

std::string Employee::getRole() const
{
    return _role;
}

double Employee::getRate() const
{
    return _rate;
}
