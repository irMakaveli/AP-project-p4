#ifndef SHEEP_HPP
#define SHEEP_HPP
#ifdef _WIN
#include<windows.h>
#else 
#include <unistd.h>
#endif 
#include <stdexcept>
#include "animal.hpp"
class Sheep : public animal
{
    int SheepCount;
    int sheepMilk;
    public:
    Sheep(int , int);
    void operator-(int);
    void operator+(int);
    int setSheep(int);
    int getSheep();
    int setsheepMilk(int);
    int getsheepMilk();
};
#endif