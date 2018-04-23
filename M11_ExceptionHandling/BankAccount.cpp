#include "stdafx.h"
#include "BankAccount.h"
#include "BalanceOutOfRangeException.h"

using namespace std;

const double BankAccount::MAX_INIT_BALANCE = 100.0;

BankAccount::BankAccount(
        const unsigned id, 
        const std::string& firstname, 
        const std::string& lastname, 
        const double initBalance) :
    _id(id),
    _firstname(firstname),
    _lastname(lastname),
    _initBalance(validateBalance(initBalance))
{
}

std::string BankAccount::toString() const
{
    return "id=" + to_string(_id) + 
        ", name=" + _firstname + " " + _lastname + 
        ", initBalance=" + to_string(_initBalance) + '\n';
}

bool BankAccount::operator==(const BankAccount other) const
{
    return this->_id == other._id
        && this->_firstname == other._firstname
        && this->_lastname == other._lastname
        && this->_initBalance == other._initBalance;
}

double BankAccount::validateBalance(const double initBalance) const
{
    if (initBalance < 0.0 || initBalance > MAX_INIT_BALANCE)
        throw BalanceOutOfRangeException("Initial balance " + to_string(initBalance) + " is out of range");

    return initBalance;
}
