#include "stdafx.h"
#include "Pizza.h"

using namespace std;

Pizza::Pizza(const std::string& name, const std::string& topping, const int& size, const double& price) :
    _name(name),
    _topping(topping),
    _size(size),
    _price(price)
{
}

Pizza::Pizza(const std::string& name, const std::string& topping, const int& size) : 
    Pizza(name, topping, size, DEFAULT_PRICE)
{
}

Pizza::Pizza(const std::string& name, const std::string& topping) :
    Pizza(name, topping, DEFAULT_SIZE, DEFAULT_PRICE)
{
}

Pizza::Pizza()
{
    _name = DEFAULT_NAME;
    _topping = DEFAULT_TOPPING;
    _size = DEFAULT_SIZE;
    _price = DEFAULT_PRICE;
}

string Pizza::toString() const
{
    return "The " + _name + " pizza " + to_string(_size) + "\" " + _topping + " pizza. Price $" + to_string(_price);
}
