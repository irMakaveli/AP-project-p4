#ifndef COW_HPP
#define COW_HPP
#ifdef _WIN
#include<windows.h>
#else 
#include <unistd.h>
#endif 
#include "animal.hpp"
class Cow : public animal
{
    int yogurt;
    int cheese;
    int cowMilk;
    int CowCount;
    public:
    Cow(int , int );
    void operator-(int);
    void operator+(int);
    int setcow(int);
    int getcow();
    int setcowMilk(int);
    int getcowMilk();
    void setcheese();
    int getcheese();
    void setyogurt();
    int getyogurt();
};
#endif