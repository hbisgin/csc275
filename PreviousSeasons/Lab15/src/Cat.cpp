#include "Cat.h"
#include<iostream>
using namespace std;


Cat::Cat():Animal()
{
    //ctor
}

Cat::Cat(int sid, string aname, string ashelter):Animal(sid, aname, ashelter)
{

}


void Cat::makeSound()
{
    cout<<"Meow Meow!!"<<endl;
}
