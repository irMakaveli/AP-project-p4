#include <iostream>
#include "cow.hpp"
using namespace std;
void Cow::setcheese(int value)//tolide panir
{
     if(value<0)//meghdar manfi ghabele ghabul nist
    {
        cout<<"wrong validate"<<endl;
        exit;//exception
    }
    if(value*3>cowMilk)//if shir be andazeh kafi mojud bashad
    {
        cout<<"you have not enugh milk"<<endl;
        exit;//exception
    }
    cowMilk -= value*3;
    cheese+= value;
}
int Cow::getcheese()
{
    return this->cheese;
}
int Cow::getyogurt()
{
    return this->yogurt;
}
void Cow::setyogurt(int value)//tolide mast
{
    if(value<0)
    {
        cout<<"wrong validate"<<endl;
        exit;//exception
    }
    if(value*3>cowMilk)//if shir be andazeh kafi mojud bashad
    {
        cout<<"you have not enugh milk"<<endl;
        exit;//exception
    }
    cowMilk -= value*3;
    yogurt+= value;
}
int Cow::getcowMilk()
{
    return this->cowMilk;
}
void Cow::setcowMilk(int feds)//tolide shir
{
    cowMilk+=feds/5;
}
Cow::Cow(int count,int price):animal(5 , price)//kharide gav
{
    CowCount+=count;
}
void Cow::setcow(int price)//afzayesh tedade gav ha
{
    CowCount+=price/20;
}
int Cow::getcow()
{
    return this->CowCount;
}
void Cow::operator-(int i)
{
    if( CowCount - i>=0)
    {
        CowCount = CowCount - i;
    }
}
void Cow::operator+(int i)
{
    setcow(i*20);
}