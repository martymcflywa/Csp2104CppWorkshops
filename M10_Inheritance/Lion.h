#pragma once
#include "Mammal.h"

class Lion : public Mammal
{
protected:
    bool hasAMane;
    std::string mane;
public:
    Lion(int numberOfLegs, bool hasATail, bool isMale, const std::string& furColour, const std::string& eyeColour);
    void printDescription() override;
};
