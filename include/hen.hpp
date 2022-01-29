#ifndef HEN_HPP
#define HEN_HPP
#ifdef _WIN
#include<windows.h>
#else 
#include <unistd.h>
#endif 
#include <stdexcept>
#include "animal.hpp"
class Hen : public animal
{
    int HenCount ;
    int egg ;
    public:
    void operator-( int );
    void operator+(int );
    int sellhenproduct(std::string);
    Hen(int , int);//count , price
    Hen();
    int setHen(int);
    void addegg(int);
    int getHen();
    int setEgg(int);
    int getEgg();
};
#endif
