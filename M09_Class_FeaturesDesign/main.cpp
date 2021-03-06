// M09_Class_FeaturesDesign.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Pizza.h"
#include "PizzaMenu.h"
#include <vector>

void TaskOne()
{
    std::cout << "Task 1:\n";

    const auto pizza = Pizza();
    auto menu = PizzaMenu(pizza);
    menu.takeOrder();
}

void TaskTwo()
{
    std::cout << "\nTask 2:\n";

    const auto pizzas = std::vector<Pizza>
    {
        Pizza(),
        Pizza("special", "pineapple"),
        Pizza("deluxe", "sausage", 16),
        Pizza("super deluxe", "lobster", 20, 17.99)
    };
    auto menu = PizzaMenu(pizzas);
    menu.printMenu();
}

int main()
{
    TaskOne();
    TaskTwo();
    return 0;
}

