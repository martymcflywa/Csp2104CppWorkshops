// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct person
{
    int date_of_birth;
};

int main()
{
    person person;
    cout << "What is your date of birth?" << endl;
    cin >> person.date_of_birth;
    cout << "Your date of birth is " << person.date_of_birth << endl;
    return 0;
}