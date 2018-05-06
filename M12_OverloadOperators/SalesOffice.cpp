#include "stdafx.h"
#include "SalesOffice.h"

SalesOffice::SalesOffice(std::string officeName, double sales) : _officeName(officeName), _sales(sales)
{
}

std::string SalesOffice::name() const
{
    return _officeName;
}

double SalesOffice::operator/(const SalesOffice salesOffice) const
{
    return _sales / salesOffice._sales * 100;
}

std::ostream& operator<<(std::ostream& out, const SalesOffice& salesOffice)
{
    out << "The " + salesOffice.name() << " office sold $" + std::to_string(salesOffice._sales) + '\n';
    return out;
}
