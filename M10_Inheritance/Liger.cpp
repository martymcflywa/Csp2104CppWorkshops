#include "stdafx.h"
#include "Liger.h"
#include <iostream>

using namespace std;

Liger::Liger(int numberOfLegs, bool hasATail, bool isMale, const std::string& furColour) :
    Lion(numberOfLegs, hasATail, isMale, furColour, ""),
    Tiger(numberOfLegs, hasATail, isMale, furColour)
{
}

void Liger::printDescription()
{
    cout << "This Liger is a mammal that walks on " << Lion::numberOfLegs << " legs and has " << Lion::tail <<
    "\nIt is a " << Lion::sex << " with " << mane << Lion::furColour << " fur, which means it has " << Tiger::stripes << ".\n\n";
}
