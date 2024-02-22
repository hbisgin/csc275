//
// Created by halil on 2/22/2024.
//

#include "HourlyEmployee.h"
#include <iostream>
using std::cout;
using std::endl;
HourlyEmployee::HourlyEmployee():hourlyRate {0}, nHours(0){}//default constructor
HourlyEmployee::HourlyEmployee(std::string theName, std::string SSN, double rate, double hours):Employee(theName,SSN),
                            hourlyRate(rate), nHours(hours){} //call the parent constructor, and initialized my members
void HourlyEmployee::display() {
    cout<<getName()<<" "<<getSSN()<<endl; //I feel ike I have a problem here because red underlined variables.
    //private means private
    cout<<hourlyRate<<" "<<nHours<<endl; //these are my own data members. don't need get functions
}