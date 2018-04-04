#pragma once
#include <string>

class Mammal
{
protected:
    int numberOfLegs;
    bool hasATail;
    bool isMale;
    std::string furColour;
    std::string eyeColour;
    std::string tail;
    std::string sex;
public:
    Mammal(int numberOfLegs, bool hasATail, bool isMale, const std::string& furColour, const std::string& eyeColour);
    virtual ~Mammal() = default;
    virtual void printDescription();
};
