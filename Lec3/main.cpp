#include <iostream>

//if you don't have public,  class will hide and keep its data members hidden/private
class Point{
public:
    void output(){
        std::cout<<x<<" ";
        std::cout<<y<<std::endl;};
    float getX(); //this is the function prototype
    float getY();
    float x;
    float y;
};

float Point::getX() { //this is the implementation
    return x;
}

float Point::getY(){
    return y;
}

//structs are like toddlers
//classes are like teenagers
int main() {
    std::cout << "Hello, World!" << std::endl;
    Point p1;//x =2.5, y= 3
    Point parray[10];
    p1.x = 2.5;
    p1.y = 3;
    p1.output();
    std::cout<<p1.getX()<<std::endl;
    std::cout<<p1.getY()<<std::endl;
    return 0;
}
