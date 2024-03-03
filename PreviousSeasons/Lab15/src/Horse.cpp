#include<iostream>
using namespace std;
#include "Horse.h"

Horse::Horse():Animal()
{
    //ctor
}

Horse::Horse(int sid, string aname, string ashelter):Animal(sid, aname, ashelter)
{

}


void Horse::makeSound()
{
    cout<<"Neigh Neigh!!"<<endl;
}
