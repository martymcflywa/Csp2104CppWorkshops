#include "stdafx.h"
#include "EmployeeFactory.h"
#include "Manager.h"
#include "Worker.h"

using namespace std;

/**
 * \brief Have to use new keyword here, else ptr/ref will be destructed as soon as scope is out.
 * \param id 
 * \param name 
 * \param role 
 * \param rate 
 * \return 
 */
Employee* EmployeeFactory::create(const int id, const std::string& name, const std::string& role, const double rate)
{
    if (role == "manager")
    {
        return new Manager(id, name, rate);
    }

    if (role == "worker")
    {
        return new Worker(id, name, rate);
    }

    return nullptr;
}
