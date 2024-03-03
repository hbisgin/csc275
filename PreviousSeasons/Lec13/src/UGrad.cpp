#include "UGrad.h"
#include<iostream>
using std::cout;
using std::endl;

UGrad::UGrad():Student(), major("CSC")
{

}
UGrad::UGrad(int sid, string sname, string smajor):Student(sid, sname), major(smajor)
{

}

string UGrad::getMajor()
{
 return major;
}

void UGrad::display()
{
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl; //name
    cout<<"Major: "<<major<<endl;
}
