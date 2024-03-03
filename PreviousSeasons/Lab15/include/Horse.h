#ifndef HORSE_H
#define HORSE_H

#include<iostream>
#include "Animal.h"
using namespace std;

class Horse:public Animal
{
    public:
        Horse();
        Horse(int sid, string aname, string ashelter);
        void makeSound();
    protected:

    private:

};

#endif // HORSE_H
