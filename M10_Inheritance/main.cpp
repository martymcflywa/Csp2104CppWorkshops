// M10_Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HrSystem.h"
#include <iostream>
#include "Mammal.h"
#include "Lion.h"
#include "Tiger.h"
#include "Liger.h"

using namespace std;

void taskOne()
{
    std::cout << "Task 1:\n";
    auto hrSystem = HrSystem(".\\employees.txt");
    hrSystem.read();
    hrSystem.printEmployees();
    hrSystem.printManagers();
    hrSystem.printWorkers();
    hrSystem.menuSelect();
}

void taskTwo()
{
    std::cout << "\nTask 2:\n\n";

    auto mammal1 = Mammal(4, true, true, "brown", "brown");
    auto mammal2 = Mammal(2, false, true, "black", "blue");
    mammal1.printDescription();
    mammal2.printDescription();

    auto lion1 = Lion(4, true, true, "golden", "brown");
    auto lion2 = Lion(4, true, false, "white", "blue");
    lion1.printDescription();
    lion2.printDescription();

    auto tiger1 = Tiger(4, true, false, "orange");
    auto tiger2 = Tiger(4, true, true, "white");
    tiger1.printDescription();
    tiger2.printDescription();

    auto liger1 = Liger(4, true, true, "white");
    auto liger2 = Liger(4, true, false, "tan");
    liger1.printDescription();
    liger2.printDescription();
}

int main()
{
    taskOne();
    taskTwo();
    return 0;
}

