#include <iostream>
#include"Dog.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Pet petobj;
    Dog dobj;

    petobj.name="cinnamon";
    petobj.print();

    dobj.name="daisy";
    dobj.breed="labradore";
    dobj.print();

    //*************
    petobj = dobj;
    petobj.print();

    //****let's create pointers
    Pet *pPtr = new Pet;
    Dog *dPtr= new Dog;//this has additional attribute, breed
    pPtr->name = "cinnamon";
    dPtr->name = "Daisy";
    dPtr->breed = "labradore";

    pPtr = dPtr; //assigning dog pointer to a pet pointer which was created for a parent object
    cout<<pPtr->name<<endl;
    //cout<<pPtr->breed<<endl; //this is not legal
    pPtr->print();


    return 0;
}
