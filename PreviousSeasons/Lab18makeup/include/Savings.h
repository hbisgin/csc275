#ifndef SAVINGS_H
#define SAVINGS_H
#include"../Account.h"

template<class T>
class Savings:public Account<T>
{
    public:
        Savings();
        Savings(int initBalance);
        virtual ~Savings();

    protected:

    private:
        float rate;
};

#endif // SAVINGS_H
