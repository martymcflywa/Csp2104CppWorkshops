#include "stdafx.h"
#include "PizzaMenu.h"
#include <iostream>

using namespace std;

PizzaMenu::PizzaMenu(Pizza standardPizza) :
    _standardPizza(standardPizza)
{
}

PizzaMenu::PizzaMenu(std::vector<Pizza> pizzas) :
    _pizzas(pizzas)
{
}

void PizzaMenu::takeOrder() const
{
    cout << "Standard pizza: " << _standardPizza.toString() << '\n';
    cout << "Do you want the standard pizza, y or n?\n";

    const auto input = getchar();

    if (input == 'y')
    {
        cout << "Your order is: " << _standardPizza.toString() << '\n';
        return;
    }

    cout << "You did not order a pizza\n";
}

void PizzaMenu::printMenu() const
{
    for (auto& pizza : _pizzas)
        cout << pizza.toString() << '\n';
}
