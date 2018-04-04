#pragma once
#include "Tiger.h"
#include "Lion.h"

class Liger : virtual public Lion, virtual public Tiger
{
public:
    Liger(int numberOfLegs, bool hasATail, bool isMale, const std::string& furColour);
    void printDescription() override;
};
