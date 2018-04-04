#include "stdafx.h"
#include "Mammal.h"
#include <iostream>

using namespace std;

Mammal::Mammal(int numberOfLegs, bool hasATail, bool isMale, const std::string& furColour, const std::string& eyeColour) :
    numberOfLegs(numberOfLegs),
    hasATail(hasATail),
    isMale(isMale),
    furColour(furColour),
    eyeColour(eyeColour)
{
    tail = hasATail ? "a tail." : "no tail.";
    sex = isMale ? "male" : "female";
}

void Mammal::printDescription()
{
    cout << "This Mammal walks on " << numberOfLegs << " legs and has " << tail <<
    "\nIt has " << furColour << " fur and " << eyeColour << " eyes.\n\n";
}
