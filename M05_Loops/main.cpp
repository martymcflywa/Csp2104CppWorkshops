// M05_Loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int taskOne()
{
    cout << "Task 1:" << endl;

    const auto min = 111;
    const auto max = 999;
    const auto message = "Enter a valid id between " + to_string(min) + 
        " and " + to_string(max) + " inclusive: ";

    int id;
    cout << message;
    cin >> id;

    while(id < min || id > max)
    {
        cout << "Invalid id" << endl;
        cout << message << endl;
        cin >> id;
    }

    cout << "Valid id" << endl;
    return id;
}

void taskTwo()
{
    cout << "\nTask 2:" << endl;

    struct Client
    {
        int id;
        int sessions;
        int firstDay;
        int firstMonth;
        int firstYear;
    };

    Client client;

    const auto maxSessions = 4;

    // get id
    client.id = taskOne();
    
    // get number of sessions
    cout << "Enter number of sessions: ";
    cin >> client.sessions;
    while(client.sessions > maxSessions)
    {
        cout << "Max sessions allowed: " << maxSessions << endl;
        cout << "Enter number of sessions: ";
        cin >> client.sessions;
    }

    // get first session date
    cout << "Enter first session day: ";
    cin >> client.firstDay;
    cout << "Enter first session month: ";
    cin >> client.firstMonth;
    cout << "Enter first session year: ";
    cin >> client.firstYear;

    cout << "Client id: " << client.id << endl;
    cout << "session 1 date: " << client.firstDay << "/" << client.firstMonth << "/" << client.firstYear << endl;

    // calculate remaining sessions
    const auto monthsInYear = 12;
    int count;
    int nextMonth;
    int nextYear;
    for(count = 2, nextMonth = client.firstMonth, nextYear = client.firstYear;
        count <= client.sessions;
        ++count)
    {
        nextMonth += 1;
        if(nextMonth > monthsInYear)
        {
            nextMonth -= monthsInYear;
            ++nextYear;
        }
        cout << "session " << count << " date: " << client.firstDay << "/" << nextMonth << "/" << nextYear << endl;
    }
}

void taskThree()
{
    cout << "\nTask 3:" << endl;
    struct Matrix
    {
        int column[10];
        int row[10];
    };

    cout << "This is a simple example of nested loops which generate a 2x2 matrix." << endl;
    
    Matrix matrix;
    for(auto i = 0; i < 10; i++)
    {
        matrix.column[i] = i;
        cout << "Iteration i = " << i << endl;
        for(auto j = 0; j < 10; j++)
        {
            matrix.row[j] = j;
            cout << "Iteration j = " << j << ", " << matrix.column[i] << ", " << matrix.row[j] << endl;
        }
    }
}

void taskFour()
{
    cout << "\nTask 4:" << endl;
    int numbers[] = { 1, 2, 3, 4, 3, 2, 1 };

    // a) Print out array elements
    cout << "a) Print out array elements:";
    for(auto number : numbers)
    {
        cout << " " << number;
    }

    // b) sum elements of array and print
    cout << "\nb) Sum elements of array: ";
    auto sum = 0;
    for(auto number : numbers)
    {
        sum += number;
    }
    cout << sum << endl;

    // c) Ask user to enter a number between 1 and 4 inclusive
    // then find and print how many times that number occurs
    int userNumber;
    const string cMessage = "c) Enter a number between 1 and 4 inclusive:";
    cout << cMessage << endl;
    cin >> userNumber;
    while(userNumber < 1 || userNumber > 4)
    {
        cout << cMessage << endl;
        cin >> userNumber;
    }
    auto match = 0;
    for(auto number : numbers)
    {
        if (number == userNumber)
            match++;
    }
    cout << "Number " << userNumber << " appears " << match << " times." << endl;

    // d) Replace all elements greater than 2 with 0
    cout << "d) Replace all elements greater than 2 with 0: ";
    for(auto number : numbers)
    {
        auto toPrint = number;
        if (toPrint > 2)
            toPrint = 0;
        cout << " " << toPrint;
    }

    // e) shift array by one element to the right, elements wrap around
    cout << "\ne) Shift array by one element to the right:";
    const auto length = sizeof(numbers) / sizeof(*numbers);
    int shiftedNumbers[length];
    const auto last = numbers[length - 1];
    for(int i = length - 2; i >= 0; i--)
    {
        shiftedNumbers[i + 1] = numbers[i];
    }
    shiftedNumbers[0] = last;
    for(auto number : shiftedNumbers)
    {
        cout << " " << number;
    }

    // f) change elements to another set of integers
    cout << "\nf) Change elements to another set of integers:";
    int newNumbers[length];
    for(auto i = 0; i < length; i++)
    {
        newNumbers[i] = numbers[i] + 2;
    }
    for(auto number : newNumbers)
    {
        cout << " " << number;
    }
    cout << endl;
}

int main()
{
    taskOne();
    taskTwo();
    taskThree();
    taskFour();
    return 0;
}

