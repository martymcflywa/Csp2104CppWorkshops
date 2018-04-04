#pragma once
#include "Employee.h"

class EmployeeFactory
{
public:
    static Employee* create(int id, const std::string& name, const std::string& role, double rate);
};
