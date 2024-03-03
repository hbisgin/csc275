#ifndef FRUIT_H
#define FRUIT_H

template<class T>
class Fruit
{
    public:
        void setItem(T no);
        T getItem();
    private:
        T itemno;
};


#endif // FRUIT_H

