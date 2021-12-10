#ifndef COW_HPP
#define COW_HPP
#include "animal.hpp"
class Cow : public animal
{
    int yogurt=0;
    int cheese=0;
    int cowMilk=0;
    int CowCount=0;
    public:
    Cow(int , int );
    void operator-(int);
    void operator+(int);
    void setcow(int);
    int getcow();
    void setcowMilk(int);
    int getcowMilk();
    void setcheese(int);
    int getcheese();
    void setyogurt(int);
    int getyogurt();
};
#endif