#ifndef MOVIE_H
#define MOVIE_H
#include<iostream>
using std::string;

class Movie
{
    public:
        Movie();
        virtual ~Movie();
        string title;
        virtual void print();
        bool operator>(Movie &mobj);
        void setYear(int yr);
        int getYear();
    protected:
        int year;
    private:
};

#endif // MOVIE_H
