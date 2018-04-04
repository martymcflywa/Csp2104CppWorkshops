#pragma once
#include "Employee.h"

class Worker : public Employee
{
public:
    Worker(int id, const std::string& name, double rate);
    bool isManager() const override;
    bool isWorker() const override;
};
