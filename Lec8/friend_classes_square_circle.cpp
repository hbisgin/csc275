// friend class
#include <iostream>
#include<cmath>
using namespace std;
#define pi 3.14

//class Square;//forward declaration for convert function


class Square {
  friend class Circle;
  public:
    Square (int a) : side(a) {}
  private:
    int side;
};

class Circle {
  public:
    double area ()
      {return pi*pow(r,2);}
    void convert (Square a);
  private:
      int r;
};



void Circle::convert (Square a) {
  r = a.side*sqrt(2);
}
  
int main () {
  Circle cir;
  Square sqr (1);
  cir.convert(sqr);
  cout << cir.area()<<endl;
  return 0;
}
