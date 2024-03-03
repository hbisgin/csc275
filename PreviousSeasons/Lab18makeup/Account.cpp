#include "Account.h"

template<class T>
Account<T>::Account()
{
    balance = 1000;
}

template<class T>
Account<T>::Account( int initBalance) //:balance(initBalance)
{
    balance = initBalance;
}

template<class T>
Account<T>::~Account()
{
    //dtor
}

template<class T>
void Account<T>::deposit(T depamount)
{
    balance+=depamount;
    lastDeposit = depamount;
}

template<class T>
T Account<T>::getlastDeposit()
{
    return lastDeposit;
}
