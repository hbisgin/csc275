#include <iostream>
#include<queue>
#include<deque>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    queue<int> iq;
    deque<int> idq;
    idq[0] = 100;
    //stack<int>: it is going to use deque as an internal storage mechanism

    cout<<idq[0]<<endl;
    for(int i=0; i<10; i++)
        iq.push(i); //push inserts at the end because this is a queue

    cout<<"size of my queue: "<<iq.size()<<endl;
    cout<<iq.back()<<endl;

    //iq[0] can't do this
    while(!iq.empty())
    {
        cout<<iq.front()<<endl;
        iq.pop(); //removing from the front. We don't have iterator.
    }
    return 0;
}
