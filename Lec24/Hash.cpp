//
// Created by halil on 4/9/2024.
//

#include "Hash.h"
//#include "listtoolshb.cpp"

Hash::Hash() {
    for(int i=0; i<SIZE; i++)
    {
        hashArray[i] = NULL;
    }
}

int Hash::computeHash(std::string element) {
    int total = 0;
    for(int i=0; i<element.size(); i++)
    {
        total+=element[i];
    }
    return total%SIZE;
}

void Hash::put(std::string element)
{
    int hash = computeHash(element);
    //std::cout<<"you need to insert this to "<<hash<<std::endl;
    headInsert(hashArray[hash], element);
}

void Hash::displayHash()
{
    for(int i=0; i<SIZE; i++)
    {
        std::cout<<i<<"th location ";
        display(hashArray[i]);
        std::cout<<std::endl;
    }
}