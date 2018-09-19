//
//  Customer.cpp
//  P01 Banking App
//
//  Created by Mission Marcus on 1/22/18.
//  Copyright  2018 Mission Marcus. All rights reserved.
//

#include "Customer.h"
#include <string>



string Customer:: getName()
{
    return name;
}

int Customer:: getAccountNumber()
{
    return accountNumber;
}

double Customer:: getBalance()
{
    return balance;
}

void Customer:: printInfo()
{
    cout << name << " (" << accountNumber << "):\t";
    cout << "$" << balance << endl;
}

void Customer:: changeBalance(double amount)
{
    double tester = balance + amount;
    
    if (tester < 0)
    {
        cout << "**Rejected Tx: " << accountNumber << "," << amount << endl;
    }
    else
    {
        
    balance = balance + amount;
        
    }
}

