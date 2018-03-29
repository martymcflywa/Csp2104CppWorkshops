#pragma once
#include "Pizza.h"
#include <vector>

class PizzaMenu
{
    Pizza _standardPizza;
    std::vector<Pizza> _pizzas;
    bool _isStandard = false;
public:
    PizzaMenu(Pizza standardPizza);
    PizzaMenu(std::vector<Pizza> pizzas);
    void takeOrder() const;
    void printMenu() const;
};
