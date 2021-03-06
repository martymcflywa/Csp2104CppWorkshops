// M11_ExceptionHandling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "BalanceOutOfRangeException.h"
#include "BankAccount.h"

using namespace std;

unsigned id;
string firstname;
string lastname;
double initBalance;

void getInput()
{
    cout << "Enter id: ";
    string idString;
    getline(cin, idString);
    id = stoi(idString);

    cout << "Enter firstname: ";
    getline(cin, firstname);

    cout << "Enter lastname: ";
    getline(cin, lastname);

    cout << "Enter initial balance: ";
    string initBalanceString;
    getline(cin, initBalanceString);
    initBalance = stod(initBalanceString);
}

int main()
{
    getInput();

    try
    {
        auto bankAccount = BankAccount(id, firstname, lastname, initBalance);
        cout << bankAccount.toString();
    }
    catch (BalanceOutOfRangeException& e)
    {
        cout << e.what() << '\n';
        return 1;
    }

    return 0;
}

