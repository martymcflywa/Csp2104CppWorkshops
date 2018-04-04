#pragma once
#include <string>

class Employee
{
    unsigned _id;
    std::string _name;
    double _rate;
public:
    Employee(unsigned id, const std::string& name, double rate);
    virtual ~Employee() = default;

    unsigned getId() const;
    std::string getName() const;
    double getRate() const;
    virtual bool isManager() const;
    virtual bool isWorker() const;
};
