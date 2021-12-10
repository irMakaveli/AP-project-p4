#ifndef HEN_HPP
#define HEN_HPP
#include "animal.hpp"
class Hen : public animal
{
    int HenCount = 0;
    int egg = 0;
    public:
    void operator-( int );
    void operator+(int );
    Hen(int , int);//count , price
    void setHen(int);
    int getHen();
    void setEgg(int);
    int getEgg();
};
#endif