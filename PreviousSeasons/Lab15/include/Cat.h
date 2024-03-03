#ifndef CAT_H
#define CAT_H


#include "Animal.h"
using namespace std;

class Cat:public Animal
{
    public:
        Cat();
        Cat(int sid, string aname, string ashelter);
        void makeSound();
        string breed;
    protected:

    private:

};

#endif // CAT_H
