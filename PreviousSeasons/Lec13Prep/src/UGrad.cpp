#include "UGrad.h"
using namespace std;

UGrad::UGrad():Student(), major("CSC")
{
    //ctor
}

UGrad::UGrad(int sid, string sname, string smajor ):Student(sid, sname), major(smajor){}

UGrad::~UGrad()
{
    //dtor
}

void UGrad::display()
{
    cout<<"ID: "<<getID()<<endl;
    cout<<"name: "<<getName()<<endl;
    cout<<"major: "<<major<<endl;

}
