#include "Student.h"

using namespace std;
Student::Student()
{
id=1;
name="John";
}

Student::Student(int sid, string sname)
{
id=sid;
name=sname;
}

Student::~Student()
{
    //dtor
}

void Student::display()
{
    cout<<"please don't  call me again!"<<endl;
}

int Student::getID(){return id;}

string Student::getName(){return name;}
