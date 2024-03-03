#include "Animal.h"
#include<iostream>
using namespace std;

Animal::Animal():id(1), name("Tiny"), shelter("GHS")
{
    //ctor
}

Animal::Animal(int sid, string aname, string ashelter)
{
    name = aname;
    id = sid;
    shelter = ashelter;
}
