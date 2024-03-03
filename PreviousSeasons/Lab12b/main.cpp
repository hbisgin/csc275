#include<iostream>
#include<string>
#include "include/Vec.h"

//using namespace std;
using namespace bisgin;

int Vector::count=1;
int main(){
    Vector v1(3,4), v2(0,5);
    Vector v3 = v1+v2;
    v3.display();
    Vector v4 = v1-v2;
    v4.display();
    Vector v5 = -v4;
    v5.display();
}
