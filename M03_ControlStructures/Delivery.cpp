#include "stdafx.h"
#include "Delivery.h"

Delivery::Delivery(const bool isRegistered, const double distance) :
    _isRegistered(isRegistered),
    _distance(distance)
{
}

double Delivery::GetTotalPrice() const
{
    if (_distance <= _range)
        return GetFlatPrice();

    return _isRegistered ? GetFlatPrice() : GetStandardPrice() + GetExcessPrice();
}

double Delivery::GetStandardPrice() const
{
    if (_distance < _range)
        return GetFlatPrice();

    return _range * _standardPrice;
}

double Delivery::GetExcessPrice() const
{
    if (_isRegistered || _distance <= _range)
        return 0;

    return (_distance - _range) * _excessPrice;
}

double Delivery::GetFlatPrice() const
{
    return _distance * _standardPrice;
}

double Delivery::GetStandardDistance() const
{
    return _distance < _range ? _distance : _range;
}

double Delivery::GetExcessDistance() const
{
    return _distance < _range ? _distance : _distance - _range;
}
