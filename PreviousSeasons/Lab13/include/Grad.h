#ifndef GRAD_H
#define GRAD_H
#include<iostream>
#include<Student.h>

class Grad:public Student
{
    public:
        Grad();
        virtual ~Grad();

    protected:

    private:
        std::string program;
};

#endif // GRAD_H
