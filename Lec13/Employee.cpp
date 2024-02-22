//
// Created by halil on 2/22/2024.
//

#include "Employee.h"
#include <iostream>
using std::cout;
using std::endl;
//using namespace std;

Employee::Employee():name("Jane Doe"), ssn("1234"){}
Employee::Employee(string theName,string SSN):name(theName), ssn(SSN){}
string Employee::getName()const{return name;}
string Employee::getSSN()const{return ssn;}
void Employee::display(){cout<<name<<" "<<ssn<<endl;}