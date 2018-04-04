#include "stdafx.h"
#include "Tiger.h"
#include <iostream>

using namespace std;

Tiger::Tiger(int numberOfLegs, int hasATail, bool isMale, const std::string& furColour) :
    Mammal(numberOfLegs, hasATail, isMale, furColour, "")
{
    stripes = isMale ? GREY_STRIPE : NORMAL_STRIPE;
}

void Tiger::printDescription()
{
    cout << "This Tiger is a mammal that walks on " << numberOfLegs << " legs and has " << tail <<
    "\nIt is a " << sex << " and has " << furColour << " fur, which means it has " << stripes << ".\n\n";
}
