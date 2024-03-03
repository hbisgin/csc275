#ifndef UGRAD_H
#define UGRAD_H
#include<iostream>
#include"Student.h"

using namespace std;

class UGrad:public Student
{
    public:
        UGrad();
        UGrad(int sid, string sname, string smajor);
        string getMajor();
        void display();
    protected:

    private:
        string major;
};

#endif // UGRAD_H
