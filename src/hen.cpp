#include <iostream>
#include "../include/hen.hpp"
using namespace std;
Hen::Hen(int count , int price):animal(2 , price)
{
    HenCount=count;
    egg = 0;   
}
Hen::Hen():Hen(0,5){}
int Hen::sellhenproduct(string s)
{
    if(s == "hen")
    {
        if(HenCount >= 1)
        {
            HenCount--;
            return 5;
        }
        else
        throw invalid_argument("no hen for sell");
    }
    else if(s == "henegg")
    {
        if(egg  >= 1)
        {
            egg--;
            return 10;
        }
        else 
        throw invalid_argument("no egg for sell");
    }
    return 0;
}
int Hen::setHen(int money)//afzaiesh tedade morgh ha
{
    if(money>=price)
    {
        HenCount += 1;
        return money - price;
    }
    else
    {
        throw invalid_argument("not enough money");
    }
}
int Hen::getEgg()
{
    if(egg==0)
    {
        throw invalid_argument("you have not egg");
    }
    return this->egg;
}
int Hen::getHen()
{
    if(HenCount==0)
    {
        throw invalid_argument("you have not hen");
    }
    return this->HenCount;
}
void Hen::addegg(int a)
{
   egg = a;
}
int Hen::setEgg(int feeds )//feeds haman olufeh ast
{
    int neadedFeed =HenCount * eat;
    
    if(neadedFeed >= feeds)
    {
        int Egg = feeds/eat;
        if(Egg==0)
        {
            return feeds%eat;
        }
        else
        {

            egg += Egg;
            return feeds%eat;
        }
    }
    else
    {

        egg += HenCount;
        return feeds - neadedFeed ;
    }
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
    HenCount +=i;
}
