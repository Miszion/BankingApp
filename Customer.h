//
//  Customer.hpp
//  P01 Banking App
//
//  Created by Mission Marcus on 1/22/18.
//  Copyright  2018 Mission Marcus. All rights reserved.
//


/*customer.h*/

//
// Customer class for banking program in modern C++.
//
// << Mission Marcus>>
// U. of Illinois, Chicago
// CS 341: Spring 2018
// Project 01
//

#pragma once

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


class Customer
{
private:
    
    string name;
    int accountNumber;
    double balance;
    
public:
    
    Customer(string name, int accountNumber, double balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    
    string getName();
    int getAccountNumber();
    double getBalance();
    void printInfo();
    void changeBalance(double amount);
};




//
// TODO
//


