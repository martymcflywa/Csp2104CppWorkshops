// M06_PointersReferences.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void taskOne()
{
    cout << "Task 1:" << endl;
    // Work way through code by hand, what should output be?

    struct Stuff
    {
        int x;
    };

    Stuff myStuff;
    vector<Stuff> someStuff;
    myStuff.x = 1;
    someStuff.push_back(myStuff);
    myStuff.x = 2;
    someStuff.push_back(myStuff);

    Stuff otherStuff;
    vector<Stuff*> collection;
    otherStuff.x = 3;
    collection.push_back(&otherStuff);
    otherStuff.x = 4;
    collection.push_back(&otherStuff);

    cout << someStuff[0].x; // 1
    cout << someStuff[1].x; // 2
    cout << ", ";
    cout << collection[0]->x; // 4
    cout << collection[1]->x; // 4
}

void taskTwo()
{
    cout << "\n\nTask 2:" << endl;

    // a) Create employee struct, stores name
    struct Employee
    {
        string name;
    };
    vector<Employee> employees;

    const string filename = "names.txt";
    string record;

    cout << "Attempting to read text file...\n";
    ifstream file(filename);

    if(file.is_open())
    {
        long lineNumber = 0;
        while(!file.eof())
        {
            getline(file, record);
            cout << "Line number: " << lineNumber << " - " << record << endl;
            ++lineNumber;

            // e) do not treat lines starting with "//" as records
            if (record.substr(0, 2) == "//")
                continue;

            // b) Store each name read from the file in an instance of the Employee struct
            auto employee = Employee();
            employee.name = string(record);
            // c) Add each employee instance to a vector of employees
            employees.push_back(employee);
        }
        file.close();

        // d) Use range based for loop to print out all names from vector
        for(const auto employee : employees)
        {
            cout << "Employee: " << employee.name << endl;
        }
        return;
    }
    cout << "Unable to open file";
}

int main()
{
    taskOne();
    taskTwo();
    return 0;
}

