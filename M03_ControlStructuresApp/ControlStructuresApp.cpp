// M03_ControlStructuresApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "../M03_ControlStructures/Delivery.h"

using namespace std;

int main()
{
    bool isRegistered;
    double distance;

    // get user input
    cout << "How far away is delivery in kilometers? " << endl;
    cin >> distance;
    cout << "Is the customer registered? 0 = no, 1 = yes " << endl;
    cin >> isRegistered;

    // construct delivery, get values
    auto delivery = Delivery(isRegistered, distance);
    const auto total = delivery.GetTotalPrice();
    const auto standardDistance = delivery.GetStandardDistance();
    const auto standardPrice = delivery.GetStandardPrice();
    const auto excessDistance = delivery.GetExcessDistance();
    const auto excessPrice = delivery.GetExcessPrice();

    cout << endl;
    cout << "Standard distance (within 10km): " << standardDistance << "km" << endl;
    cout << "Standard price: $" << standardPrice << endl;
    cout << "Excess distance (after 10km): " << excessDistance << "km" << endl;
    cout << "Excess price: $" << excessPrice << endl;
    cout << "Total price: $" << total << endl;

    return 0;
}

