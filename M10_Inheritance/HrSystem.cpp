#include "stdafx.h"
#include "HrSystem.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include "EmployeeFactory.h"

using namespace std;

HrSystem::HrSystem(const std::string& filepath) : _filepath(filepath)
{
}

void HrSystem::read()
{
    cout << "Reading " << _filepath << endl;

    auto file = ifstream(_filepath);

    if (!file.is_open())
        throw invalid_argument("Error opening " + _filepath);

    string line;
    unsigned id = 0;
    string name;
    string role;

    unsigned recordLine = 0;

    while (getline(file, line))
    {
        if (recordLine == 0)
        {
            id = stoi(line);
            recordLine++;
            continue;
        }
        if (recordLine == 1)
        {
            name = line;
            recordLine++;
            continue;
        }
        if (recordLine == 2)
        {
            role = line;
            recordLine++;
            continue;
        }

        // last line of record
        const auto rate = stod(line);
        _employees.push_back(EmployeeFactory::create(id, name, role, rate));
        recordLine = 0;
    }
    
    file.close();
}

void HrSystem::printEmployees()
{
    cout << "Employees:" << endl;
    for (const auto& employee : _employees)
        printEmployee(employee);
}

void HrSystem::printManagers()
{
    cout << "Managers:" << endl;
    auto managers = filter([](Employee* e)
    {
        return e->isManager();
    });

    for (const auto& manager : managers)
        printEmployee(manager);
}

void HrSystem::printWorkers()
{
    cout << "Workers:" << endl;
    auto workers = filter([](Employee* e)
    {
        return e->isWorker();
    });

    for (const auto& worker : workers)
        printEmployee(worker);
}

void HrSystem::menuSelect()
{
    cout << "Welcome to HR:" << endl;

    string input;

    do
    {
        cout << "1) Query payrate" << endl;
        cout << "2) Quit" << endl;
        getline(cin, input);
    }
    while (!isValid(input));

    switch (stoi(input))
    {
    case 1:
        rateQuery();
        break;
    case 2:
        return;
    default:
        throw invalid_argument("Unexpected input " + input);
    }
}

void HrSystem::rateQuery()
{
    string name;
    vector<Employee*> employeesFound;
    do
    {
        cout << "Enter employee name:" << endl;
        getline(cin, name);
        employeesFound = filter([&name](const Employee* e)
        {
            return e->getName() == name;
        });
    }
    while (!isFound(name, employeesFound));

    cout << "Employees found:" << endl;
    for (const auto& employee : employeesFound)
        printEmployee(employee);

    menuSelect();
}

void HrSystem::printEmployee(const Employee* employee)
{
    cout << "id=" << employee->getId() << 
        ", name=" << employee->getName() <<
        ", rate=" << employee->getRate() << endl;
}

bool HrSystem::isValid(const string& input)
{
    const auto isValid = input == "1" || input == "2";

    if (!isValid)
        cout << "Invalid input, try again" << endl;

    return isValid;
}

bool HrSystem::isFound(const string& name, const vector<Employee*>& matches)
{
    const auto isFound = !matches.empty();

    if (!isFound)
        cout << name << " not found, try again" << endl;

    return isFound;
}

template <typename Predicate>
vector<Employee*> HrSystem::filter(Predicate predicate)
{
    auto filtered = vector<Employee*>{};

    copy_if(
        _employees.begin(),
        _employees.end(),
        back_inserter(filtered),
        predicate);

    return filtered;
}
