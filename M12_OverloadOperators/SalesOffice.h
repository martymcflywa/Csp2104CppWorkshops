#pragma once
#include <string>

class SalesOffice
{
    friend std::ostream& operator<<(std::ostream& out, const SalesOffice& salesOffice);

    std::string _officeName;
    double _sales;
public:
    SalesOffice(std::string officeName, double sales);
    std::string name() const;
    double operator/(SalesOffice salesOffice) const;
};
