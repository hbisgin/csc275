#include <iostream>

using namespace std;

struct Profile
{
    string name;
    Profile *next;
};

int main()
{
    Profile *head;//head is a pointer which can hold the address of a Profile object
    head = new Profile;// Profile *head = new Profile; HEAP memory

    Profile p1;
    p1.name="HB"; //you can use dot operator to access data members;

    (*head).name="HB";//dot operator comes after dereferencing
    head->name = "HB";
    cout<<head->name<<endl;

    Profile *ptr = new Profile;//ptr has the address of the second node
    ptr->name = "EB";
    //how can i get to my next pointer in the first node?
    head->next = ptr;//pleas eget the address of the second node, who has the address of the second note?
    cout<<head->next->name<<endl;

    Profile *ptr2 = new Profile;
    ptr2->name = "YB";

    head->next->next = ptr2;
    cout<<head->next->next->name<<endl;

    head->next->next->next = new Profile;
    head->next->next->next->name = "NB";
     head->next->next->next->next=NULL;
    cout<<head->next->next->next->name<<endl;


    Profile *temp = head;
    //if you have haed, cout<<head->name,
    //cout<<temp->name
    cout<<"printing inside a while loop"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->name<<endl;
        temp = temp->next;
    }


    return 0;
}
