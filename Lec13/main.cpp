#include <iostream>
#include "Employee.h"
#include "HourlyEmployee.h"
using namespace std;

int main() {
    Employee emp, emp2("Justin", "6785"); //this has name Jane Doe, SSN 1234
    HourlyEmployee hemp, hemp2("Halil", "3456", 15, 6); //hourly employee, this has name Jane Doe, SSN 1234

    emp.display();
    emp2.display();

    hemp.display(); //you still get the name and the ssn because it was inherited this way
    hemp2.display();
    std::cout << "Hello, World!" << std::endl;
    cout<<emp.getName()<<endl;
    return 0;
}
