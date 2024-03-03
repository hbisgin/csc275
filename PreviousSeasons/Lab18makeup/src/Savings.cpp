#include "Savings.h"

template<class T>
Savings<T>::Savings():Account<T>()
{
    //ctor
}

template<class T>
Savings<T>::Savings(int initBalance):Account<T>(initBalance)
{
    //ctor
}

template<class T>
Savings<T>::~Savings()
{
    //dtor
}
