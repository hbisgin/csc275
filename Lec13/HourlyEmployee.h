//
// Created by halil on 2/22/2024.
//

#ifndef LEC13_HOURLYEMPLOYEE_H
#define LEC13_HOURLYEMPLOYEE_H

#include "Employee.h"
class HourlyEmployee:public Employee { //deriving a class from Employee class
public:
    HourlyEmployee();//default
    HourlyEmployee(string theName, string SSN, double rate, double hours);
    double getHourRate()const; //this is specific to this child/derived class
    double getHours()const; //this is specific to this child/derived class
    void display();//I want to redefine this function
private:
    double hourlyRate;
    double nHours;
};


#endif //LEC13_HOURLYEMPLOYEE_H
