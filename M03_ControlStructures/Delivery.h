#pragma once

class Delivery
{
    bool _isRegistered;
    double _distance;

    const double _range = 10.0;
    const double _standardPrice = 0.3;
    const double _excessPrice = 0.4;

    double GetFlatPrice() const;

public:
    Delivery(bool isRegistered, double distance);
    double GetTotalPrice() const;
    double GetStandardPrice() const;
    double GetExcessPrice() const;
    double GetStandardDistance() const;
    double GetExcessDistance() const;
};
