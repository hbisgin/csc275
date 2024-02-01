// friend class
#include <iostream>
#include<cmath>
using namespace std;
#define pi 3.14

class Square;//forward declaration for convert function

class Circle {
public:
    double area ()
    {return pi*pow(r,2);}
    void convert (Square a);
private:
    int r;
};

class Square {
  friend class Circle;
  public:
    Square (int a) : side(a) {}
  private:
    int side;
};

class Point{
public:
    Point():x(0), y(0){}
    Point(int xx, int yy):x(xx), y(yy){}
    int & operator[](int index);
    void displayData();
    //void display(){cout<<x<<y<<endl;}
    friend ostream& operator<<(ostream & outStream, const Point & pobj);
private:
    int x, y;
    int data[2];
};

ostream& operator<<(ostream & outStream, const Point & pobj)
{
       outStream<<pobj.x<<" "<<pobj.y;
       return outStream;
}
int & Point::operator[](int index) {
    return data[index]; //Point p1; p1[1] = 10;
    //I returned the location at index of data array
}

void Point::displayData() {
    for(int i=0; i<2; i++)
        cout<<data[i]<<endl;
}

void Circle::convert (Square a) {
  r = a.side*sqrt(2); //instead of saying a.getSide, a.side s though this is something I have known
}

double & returnRef(double &a)
{
    return a;
}
int main () {
    Point p1(5,10), p2;
    cout<<p1<<endl; //cout is an object of ostream class which uinder standard library
    p1[0] = 100;
    p1[1] = 50;
    p1.displayData();
  Circle cir;
  Square sqr (1);
  cir.convert(sqr);
  cout << cir.area()<<endl;
  int b = 10;
  int &r = b; //r is a reference variable
  double variable = 100;
    returnRef(variable) = 150;
    cout<<variable<<endl;
  cout<<b<<" and "<<r<<endl;
  r = 100;
  cout<<b<<" and "<<r<<endl;
  return 0;
}
