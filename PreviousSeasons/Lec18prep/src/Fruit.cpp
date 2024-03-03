#include"Fruit.h"

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
