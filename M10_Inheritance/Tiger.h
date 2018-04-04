#pragma once
#include "Mammal.h"

class Tiger : public Mammal
{
protected:
    const std::string NORMAL_STRIPE = "brown stripes";
    const std::string GREY_STRIPE = "grey stripes";
    std::string stripes;
public:
    Tiger(int numberOfLegs, int hasATail, bool isMale, const std::string& furColour);
    void printDescription() override;
};
