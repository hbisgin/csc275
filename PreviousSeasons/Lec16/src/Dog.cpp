#include "Dog.h"
#include<iostream>
using namespace std;

Dog::Dog()
{
    //ctor
}

Dog::~Dog()
{
    //dtor
}

void Dog::print()
{
    cout<<name<<" "<<breed<<endl;
}
