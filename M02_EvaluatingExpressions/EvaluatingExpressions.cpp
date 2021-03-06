// M02_EvaluatingExpressions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void PrintValue(const string expression, const int val)
{
    cout << expression + " = " + to_string(val) << endl;
}

void PrintValue(const string expression, const double val)
{
    cout << expression + " = " + to_string(val) << endl;
}

void TaskOne()
{
    cout << "\nTask 1:" << endl;

    auto a = 0;
    auto b = 1;
    const auto c = 5;

    PrintValue("a + b", a + b);
    PrintValue("a > b", a > b);
    PrintValue("3 + b * c", 3 + b * c);
    PrintValue("++b", ++b);
    PrintValue("b++", b++);
    PrintValue("b <= c", b <= c);
    PrintValue("a > 5", a > 5);
    PrintValue("++a == b", ++a == b);
    PrintValue("b != c", b != c);
    PrintValue("b == c", b == c);
    PrintValue("b = c", b = c);
    PrintValue("b / c", b / c);
    PrintValue("b % c", b % c);
    PrintValue("b + c * 4 / 3", b + c * 4 / 3);
    PrintValue("22 / (c + 3)", 22 / (c + 3));
}

void TaskTwo()
{
    cout << "\nTask 2:" << endl;

    int a, b, c;
    double x, y, z;

    a = 13;
    b = 4;
    x = 3.3;
    y = 15.78;

    c = a + b;
    PrintValue("a + b", c);
    z = x + y;
    PrintValue("x + y", z);
    c = a / b;
    PrintValue("a / b", c);
    c = a % b;
    PrintValue("a % b", c);
    a = 2;
    c = ++a;

    // Task 3
    cout << "\nTask 3:" << endl;
    cout << "a = " << a << ", c = " << c << endl;
    a = 2;
    c = a++;
    cout << "a = " << a << ", c = " << c << endl;
}

void TaskFour()
{
    cout << "\nTask 4:" << endl;

    struct Student
    {
        int creditHours;
        int gradePointAverage;
    };

    const auto HOURS_REQUIRED_TO_GRADUATE = 120;
    Student student;

    // input
    cout << "Enter student credit hours: ";
    cin >> student.creditHours;
    cout << "Enter student grade point average: ";
    cin >> student.gradePointAverage;

    // output
    cout << "Number of credit hours is " << student.creditHours << endl;
    cout << "Grade point average is " << student.gradePointAverage << endl;
    const auto remainingHours = HOURS_REQUIRED_TO_GRADUATE - student.creditHours;
    cout << "Credit hours remaining to graduate: " << remainingHours << endl;

    // Task 5
    const auto PASSING_GRADE_AVERAGE = 3.2;
    cout << "Student is passing: " << (student.creditHours >= PASSING_GRADE_AVERAGE) << endl;
    cout << "Student has graduated: " << (remainingHours <= 0) << endl;
}

int main()
{
    TaskOne();
    TaskTwo();
    TaskFour();
    return 0;
}
