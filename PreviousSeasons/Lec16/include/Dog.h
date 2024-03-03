#ifndef DOG_H
#define DOG_H
#include<iostream>

#include"Pet.h"
using namespace std;

class Dog: public Pet
{
    public:
        Dog();
        virtual ~Dog();
        string breed;
        void print();
    protected:

    private:
};

#endif // DOG_H
