// M13_Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Calc.h"


int main()
{
    std::cout << "Multiply:\n";
    std::cout << Calc::multiply(4, 3) << '\n';
    std::cout << Calc::multiply(8.2, 1.7) << '\n';
    std::cout << Calc::multiply(5.3f, 0.75f) << '\n';
    std::cout << Calc::multiply('Z', 'A') << '\n';

    std::cout << "\nAdd:\n";
    std::cout << Calc::add(4, 3) << '\n';
    std::cout << Calc::add(8.2, 1.7) << '\n';
    std::cout << Calc::add(5.3f, 0.75f) << '\n';
    std::cout << Calc::add('Z', 'A') << '\n';
    
    return 0;
}

