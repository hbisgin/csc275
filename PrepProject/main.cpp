//
// Created by halil on 1/6/2024.
//
#include <iostream>

using namespace std;
#define namelength 12
struct Student{
    char name[12];
    int age;
    char grade;
};


enum Day {monday=1, tuesday};

void fungrade(Student &student)
{
    cin.getline(student.name, namelength);
}
int main(){
    Student student, students[10];
    students[0] = {"halil", 24};
    students[0].grade = 'A';
    Student *ptr = students;
    cout<<students[0].name<<endl;
    cout<<ptr[0].name<<endl;
    cout<<ptr[0].grade<<endl;
    Day d;
    cout<<d<<endl;
    //cout<<Day(1)<<endl;
    for (int i=0; i<2; i++)
    {
        cout<<Day(i)<<endl;
    }
    cin.getline(student.name, 12);
    cout<<student.name<<endl;
    fungrade(student);
    cout<<student.name<<endl;

    d = tuesday;
    switch(d) {
        case monday:
            cout << "it's monday" << endl;
            break;
        case tuesday:
            cout << "it's tuesday" << endl;
            break;
        default:
            cout<<"none of them"<<endl;
    }

}
