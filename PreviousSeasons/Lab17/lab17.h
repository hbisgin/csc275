#ifndef LAB17_H_INCLUDED
#define LAB17_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

template<class T>
int linearsearch(T a[], int size, T const key)
{
    for(int i=0; i<size; i++)
        if(a[i]==key)
            return i;

    return -1;
}


#endif // LAB17_H_INCLUDED
