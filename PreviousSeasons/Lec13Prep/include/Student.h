#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using std::cout;
using std::string;

class Student
{
    public:
        Student();
        Student(int sid, string sname);
        virtual ~Student();
        void display();
        int getID();
        string getName();
    protected:

    private:
        string name;
        int id;
};

#endif // STUDENT_H
