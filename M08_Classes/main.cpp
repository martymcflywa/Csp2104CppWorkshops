// M08_Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ostream>
#include <iostream>
#include "CollegeCourse.h"
#include "Letter.h"
#include "HrSystem.h"

using namespace std;

void taskOne()
{
    cout << "Task 1:" << endl;
    auto course = CollegeCourse("engineering", 565, 200);
    course.displayCourseData();
}

void taskTwo()
{
    cout << "\nTask 2:" << endl;
    auto letter = Letter();
    letter.setRecipient("Ms", "Jackson");
    letter.displayGreeting();
    Letter::displayCount();
}

void taskThree()
{
    cout << "\nTask 3:" << endl;
    auto hrSystem = HrSystem(".\\employees.txt");
    hrSystem.read();
    hrSystem.printEmployees();
    hrSystem.printManagers();
    hrSystem.printWorkers();
    hrSystem.menuSelect();
}

int main()
{
    taskOne();
    taskTwo();
    taskThree();
    return 0;
}

