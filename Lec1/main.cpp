#include <iostream>
#include <cmath>
using namespace std;


struct Circle{
    float radius;
    float area;
    float circumference;
};

struct Student{
    string name;
    float GPA;
    int age;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout<<"I don't have to say std::cout here"<<endl;
    Student firstStudent;
    int b;
    b=8;
    int * ptr = &b;
    cout<<*ptr<<endl; //deferencing
    Circle mycircle;
    cout<<"Enter the radius:"<<endl;
    cin>>mycircle.radius;
    cout<<mycircle.radius<<endl;

    mycircle.circumference = 2*3.14*mycircle.radius; //2*PI*radius
    mycircle.area = 3.14*mycircle.radius*mycircle.radius; //PI*r^2
    mycircle.area = 3.14*pow(mycircle.radius, 2);
    cout<<"the circumference of the circle is "<<mycircle.circumference<<endl;
    cout<<"the area of the circle is "<<mycircle.area<<endl;
    return 0;
}
