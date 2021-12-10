#ifndef SHEEP_HPP
#define SHEEP_HPP
#include "animal.hpp"
class Sheep : public animal
{
    int SheepCount=0;
    int sheepMilk=0;
    public:
    Sheep(int , int);
    void operator-(int);
    void operator+(int);
    void setSheep(int);
    int getSheep();
    void setsheepMilk(int);
    int getsheepMilk();
};
#endif