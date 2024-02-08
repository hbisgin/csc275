#include <iostream>
using namespace std;

void doubleMe(int *ptr)
{
    *ptr = 2*(*ptr); //if you deference on RHS, you retrieve the value
    //if you deference on LHS, you are assigning a value through your pointer
}

int * doubleArray(int a[], int size)
{
    int *ptr = a; //rray name has the address. Therefore, I can assign this address to a pointer
    for(int i=0; i<size; i++)
        ptr[i] = 2*a[i];
    return ptr; //returning a pointer
}

class Fruit{
public:
    Fruit():name("banana"), price(0.55){}
    Fruit(string fname){this->name = fname; this->price=0.50;}
    Fruit(string fname, float fprice):name(fname), price(fprice){}

    void display(){cout<<this->name<<" "<<price<<endl;};
private:
    string name;
    float price;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Fruit *fptr = new Fruit[3];
    int array[5] = {1, 2,3, 4,5};
    int *temp = doubleArray(array, 5);// I'm returning a pointer, that is why I can hold with a pointer
    for (int i=0; i<5; i++)
    {
        cout<<temp[i]<<endl; //I can use my pointer like an array name.
    }

    int *ptr = new int(15);
    int *aptr = new int [5];//looks like there are 5 memory consecutive boxes
    for (int i=0; i<5; i++)
        aptr[i] = 2*i;//0, 2, 4, 6, 8,

    cout<<*ptr<<endl;
    for(int i=0; i<5; i++)
        cout<<*(aptr+i)<<endl; //pointer arithmetic +, -
    for(int i=0; i<5; i++)
        cout<<aptr[i]<<endl;

    for(int i=0; i<3; i++)
        fptr[i].display();
    return 0;
}
