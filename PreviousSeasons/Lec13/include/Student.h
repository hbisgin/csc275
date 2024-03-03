#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using std::string; // using namespace std

class Student
{
    public:
        Student();
        Student(int sid, string sname);
        int getID();
        string getName();
        void display(); //this will display details of the student
    protected:
        int id;
        string name;
    private:


};

#endif // STUDENT_H
