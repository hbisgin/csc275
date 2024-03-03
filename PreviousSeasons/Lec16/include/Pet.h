#ifndef PET_H
#define PET_H
#include<iostream>

using std::string;

class Pet
{
    public:
        Pet();
        virtual ~Pet();
        virtual void print();
        string name;
    protected:

    private:
};

#endif // PET_H
