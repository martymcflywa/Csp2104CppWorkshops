#pragma once
#include "Employee.h"

class Manager : public Employee
{
public:
    Manager() = delete;
    Manager(int id, const std::string& name, double role);
    bool isManager() const override;
    bool isWorker() const override;
};
