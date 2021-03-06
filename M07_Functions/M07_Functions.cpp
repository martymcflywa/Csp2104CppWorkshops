// M07_Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// task 2
struct Vector3
{
    double x, y, z;
};

void setVector(Vector3& vector, const double x, const double y, const double z)
{
    vector.x = x;
    vector.y = y;
    vector.z = z;
}

void taskTwo()
{
    cout << "Task 2:" << endl;
    Vector3 vector;
    setVector(vector, 1, 4, 5);
    cout << vector.x << "," << vector.y << "," << vector.z << endl;
}

// task 3
string read(const string& filename)
{
    string record;

    auto file = ifstream(filename);

    if(file.is_open())
    {
        long lineNumber = 0;
        while(!file.eof())
        {
            getline(file, record);
            cout << "Line:" << lineNumber + 1 << " " << record << endl;
            lineNumber++;
        }
        file.close();
        return record;
    }
    cout << "Unable to open file" << endl;
    return nullptr;
}

int write(const string& filename)
{
    auto file = ofstream(filename);

    if(file.is_open())
    {
        file << "I can write to your file" << endl;
        file << "I can write again" << endl;
        file.close();
        return 1;
    }
    cout << "Unable to open file" << endl;
    return 0;
}

int select()
{
    int item;
    cout << "This is a little test for C++ file handling" << endl;
    cout << "To write file, enter [1]" << endl;
    cout << "To read file, enter [2]" << endl;
    cin >> item;

    while(!(item == 1 || item == 2))
    {
        cout << "Wrong selection, try again." << endl;
        cin >> item;
    }
    return item;
}

void taskThree()
{
    cout << "Task 3:" << endl;
    const string filename = ".\\db.txt";
    string line;
    const auto item = select();

    if (item == 1)
        write(filename);
    if (item == 2)
        read(filename);
}

int main()
{
    taskTwo();
    taskThree();
    return 0;
}

