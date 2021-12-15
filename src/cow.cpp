#include <iostream>
#include "cow.hpp"
using namespace std;
Cow::Cow(int count,int price):animal(5 , price)//kharide gav
{
    CowCount =count;
    yogurt=0;
    cheese=0;
    cowMilk=0;
}
void Cow::setcheese()//tolide panir
{
    if(cowMilk<=0)
    {
        throw invalid_argument("not enough milk");
    }
    if(25 > cowMilk)//if shir be andazeh kafi mojud bashad
    {
        cheese += cowMilk/5;
        cowMilk = cowMilk%5;
    }
    else if(25 <= cowMilk)
    {
        cheese += 5;
        cowMilk -= 25;
    }
}
int Cow::getcheese()
{
    if(cheese ==0)
    {
        throw invalid_argument("your cheese is zero");
    }
    return this->cheese;
}
int Cow::getyogurt()
{
    if(yogurt ==0)
    {
        throw invalid_argument("your yogurt is zero");
    }
    return this->yogurt;
}
void Cow::setyogurt()//tolide mast value = milk
{
    if(cowMilk<=0)
    {
        throw invalid_argument("not enough milk");
    }
    if(15 > cowMilk)//if shir be andazeh kafi mojud bashad
    {
        yogurt += cowMilk/3;
        cowMilk = cowMilk%3;
    }
    else if(15 <= cowMilk)
    {
        yogurt += 5;
        cowMilk -= 15;
    }
}
int Cow::getcowMilk()
{
    if(cowMilk == 0)
    {
        throw invalid_argument("your milk is zero");
    }
    return this->cowMilk;
}
int Cow::setcowMilk(int feeds)//tolide shir
{
    int neadedFeed = CowCount * eat;
    if(neadedFeed >= feeds)
    {
        int milk = feeds/eat;
        if(milk==0)
        {
            return feeds%eat;
        }
        else
        {
            sleep(5);
            cowMilk += milk;
            return feeds%eat;
        }
    }
    else
    {
        sleep(5);
        cowMilk += CowCount;
        return feeds - neadedFeed ;
    }
}
int Cow::setcow(int money)//afzayesh tedade gav ha
{
    if(money>=price)
    {
        CowCount += 1;
        return money - price;
    }
    else
    {
        throw invalid_argument("you have not enough money");
    }
}
int Cow::getcow()
{
    if(CowCount == 0)
    {
        throw invalid_argument("there is no cow");
    }
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
    CowCount += i;
}