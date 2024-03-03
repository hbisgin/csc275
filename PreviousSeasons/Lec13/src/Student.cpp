#include "Student.h"
#include<iostream>

using std::string;
using std::cout;
using std::endl;

Student::Student():id(1), name("John Doe")
{
    //ctor
}

Student::Student(int sid, string sname):id(sid), name(sname)
{

}

int Student::getID()
{
    return id;
}

string Student::getName()
{
    return name;
}

void Student::display()
{
    cout<<"Please don't call me!"<<endl;
}
