#pragma once
#include <string>

class BankAccount
{
    unsigned _id;
    std::string _firstname;
    std::string _lastname;
    double _initBalance;
    const static double MAX_INIT_BALANCE;

public:
    BankAccount(unsigned id, const std::string& firstname, const std::string& lastname, double initBalance);
    std::string toString() const;
    bool operator==(BankAccount other) const;
private:
    double validateBalance(double initBalance) const;
};