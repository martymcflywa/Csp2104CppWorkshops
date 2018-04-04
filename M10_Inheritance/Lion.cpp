#include "stdafx.h"
#include "Lion.h"
#include <iostream>

using namespace std;

Lion::Lion(int numberOfLegs, bool hasATail, bool isMale, const std::string& furColour, const std::string& eyeColour):
    Mammal(numberOfLegs, hasATail, isMale, furColour, eyeColour), hasAMane(false)
{
    if (isMale)
        hasAMane = true;

    mane = hasAMane ? "a mane of " : "";
}

void Lion::printDescription()
{
    cout << "This Lion is a mammal that walks on " << numberOfLegs << " legs and has " << tail <<
    "\nIt is a " << sex << " with " << mane << furColour << " fur and " << eyeColour << " eyes.\n\n";
}
