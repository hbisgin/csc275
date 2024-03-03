#ifndef CARTOON_H
#define CARTOON_H
#include"Movie.h"
#include<iostream>
using namespace std;

class Cartoon:public Movie
{
    public:
        Cartoon();
        virtual ~Cartoon();
        string voice;
        void print();
    protected:

    private:
};

#endif // CARTOON_H
