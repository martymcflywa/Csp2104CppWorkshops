#include "stdafx.h"
#include "Letter.h"
#include <iostream>

using namespace std;

// Don't forget to init static member
int Letter::_count = 0;

void Letter::setRecipient(const string& title, const string& recipient)
{
    _title = title;
    _recipient = recipient;
    _count++;
}

void Letter::displayGreeting() const
{
    const auto out = "Dear " + _title + ". " + _recipient + ",";
    cout << out << endl;
}

void Letter::displayCount()
{
    cout << "count=" << to_string(_count) << endl;
}
