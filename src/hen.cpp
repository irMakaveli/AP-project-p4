#include "hen.hpp"
using namespace std;
Hen::Hen(int count , int price):animal(1 , price)
{
   HenCount+=count;   
}
void Hen::setHen(int i)//afzaiesh tedade morgh ha
{
    HenCount+=i/4;
}
int Hen::getEgg()
{
    return this->egg;
}
int Hen::getHen()
{
    return this->HenCount;
}
void Hen::setEgg(int i )//i haman olufeh ast
{
    this->egg+=i/2;
}
void Hen::operator-(int i)
{
    if( HenCount - i>=0)
    {
        HenCount = HenCount - i;
    }
}
void Hen::operator+(int i)
{
    setHen(i*4);
}