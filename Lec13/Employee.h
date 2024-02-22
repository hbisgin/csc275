//
// Created by halil on 2/22/2024.
//

#ifndef LEC13_EMPLOYEE_H
#define LEC13_EMPLOYEE_H
#include <iostream>
using std::string;

class Employee {
public:
    Employee();
    Employee(string theName,string SSN);
    string getName()const;
    string getSSN()const;
    void display();
private:
    string name, ssn;
    double netPay;
};


#endif //LEC13_EMPLOYEE_H
