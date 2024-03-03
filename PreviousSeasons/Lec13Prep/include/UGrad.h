#ifndef UGRAD_H
#define UGRAD_H
#include<iostream>
#include "Student.h"
using std::string;

class UGrad:public Student
{
    public:
        UGrad();
        UGrad(int sid, string sname, string smajor );
        virtual ~UGrad();
        void display();

    protected:

    private:
        string major;
};

#endif // UGRAD_H
