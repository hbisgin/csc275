#include <iostream>
#include"Student.h"
#include"UGrad.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Student s1;
    s1.display();
    UGrad us1(1, "Jane Doe", "CIS");
    us1.display();
    us1.Student::display()
;    return 0;
}
