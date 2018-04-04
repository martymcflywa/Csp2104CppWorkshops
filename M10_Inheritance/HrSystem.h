#pragma once
#include <string>
#include <vector>
#include "Employee.h"

class HrSystem
{
    std::vector<Employee*> _employees{};
    std::string _filepath;
public:
    HrSystem(const std::string& filepath);
    void read();
    void printEmployees();
    void printManagers();
    void printWorkers();
    void menuSelect();
    void rateQuery();
private:
    static void printEmployee(const Employee* employee);
    template<typename Predicate>
    std::vector<Employee*> filter(Predicate predicate);
    static bool isValid(const std::string& input);
    static bool isFound(const std::string& name, const std::vector<Employee*>& matches);
};
