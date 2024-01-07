#include <iostream>
#include <cmath>
using namespace std;

struct Circle{
    float radius;
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    Circle mycircle;
    Circle *cptr = &mycircle;
    cin>>mycircle.radius;
    cout<<mycircle.radius;
    cout<<cptr->radius;
    return 0;
}
