#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
using namespace std;
//using std::string

class Animal
{
    public:
        Animal(); //default
        Animal(int sid, string aname, string ashelter); //explicit
        virtual void makeSound()=0; //=0 makes this a 'pure' virtual function. You don't need a defn for this in the base class
        //this class becomes an abstract base class

    protected:
        int id;
        string name, shelter;
    private:
};

#endif // ANIMAL_H
