
template<class T>//template prefix
void myswap(T &var1, T &var2)
{
    T temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}


template<class T>
T mymin(T a[], int size)
{
    T minvalue  = a[0];
    for(int i=1; i<size; i++)
    {
        if(a[i]<minvalue)
            minvalue = a[i];
    }

    return minvalue;
}

//a[5]={1,4,-1,5,32} //Fruit<int>f1;  Fruit<string>f2;

template<class T>
class Fruit
{
    public:
        void setItem(T no);
        T getItem();
    private:
        T itemno;
};


template<class T>
void Fruit<T>::setItem(T no)
{
    itemno = no;
}

template<class T>
T Fruit<T>::getItem()
{
    return itemno;
}
