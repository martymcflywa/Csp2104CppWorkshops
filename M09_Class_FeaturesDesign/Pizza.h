#pragma once
#include <string>

class Pizza
{
    const std::string DEFAULT_NAME = "standard";
    const std::string DEFAULT_TOPPING = "cheese";
    const int DEFAULT_SIZE = 12;
    const double DEFAULT_PRICE = 8.99;

    std::string _name;
    std::string _topping;
    int _size;
    double _price;
public:
    Pizza(const std::string& name, const std::string& topping, const int& size, const double& price);
    Pizza(const std::string& name, const std::string& topping, const int& size);
    Pizza(const std::string& name, const std::string& topping);
    Pizza();
    std::string toString() const;
};
