#pragma once
#include <string>

class Employee
{
    unsigned _id;
    std::string _name;
    std::string _role;
    double _rate;
public:
    Employee(unsigned id, const std::string& name, const std::string& role, double rate);
    unsigned getId() const;
    std::string getName() const;
    std::string getRole() const;
    double getRate() const;
};
