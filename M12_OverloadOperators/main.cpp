// M12_OverloadOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SalesOffice.h"
#include <iostream>

const auto northOffice = SalesOffice("North", 86.4419);
const auto southOffice = SalesOffice("South", 100.0);

void taskOne()
{
    const auto percentage = northOffice / southOffice;
    std::cout << "The " + northOffice.name() + " office has " + std::to_string(percentage) + "% of the sales of " + southOffice.name() + " office\n";
}

void taskTwo()
{
    std::cout << northOffice;
    std::cout << southOffice;
}

int main()
{
    taskTwo();
    taskOne();
    return 0;
}

