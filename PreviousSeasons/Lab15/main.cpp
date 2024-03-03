#include <iostream>
#include "Horse.h"
#include "Cat.h"

using namespace std;

int main()
{
    Horse Horse1;
    Cat Cat1;
    //Animal A1; it's an abstract base class from which I can't create objects
    cout << "Hello world!" << endl;
    Horse1.makeSound();
    Cat1.makeSound();


    return 0;
}
