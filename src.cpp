#include <iostream>
#include "class.hpp"
using namespace std;
Money::Money(int money)
{
    this->money=0;
    setmoney(money);
}
void Money::setmoney(int value)
{
    if(value < 0 && value + money < 0)
    {
        cout<<"wrong value"<<endl;
        return;
    } 
    else
    {
        this->money += value;
    }
}
int Money::getmoney()
{
    return this->money;
}
int Money::getmoney(int count , int price)
{
    if((count*price)>money)
    {
        cout<<"you have not enough money"<<endl;
        exit;//exception
    }
    if((count*price)<0)
    {
        cout<<"wrong values"<<endl;
        exit;//exception
    }

    this->money -=(count*price);
    return count*price;
}
int feed::getFeed(int count,int fed)
{
    
    if((count < 0 && count *fed < 0)||count*fed> feeds)
    {
        cout<<"wrong value"<<endl;
        exit;//exception
    } 
    else
    {
        this->feeds -= fed*count;
    }   
    return fed*count;
}
void feed::eated(int i)
{
    if(feeds - i >=0)
    {
        feeds-=i;
    }
}
int feed::getFeed()
{
    return feeds;
}
void feed::setFeed(int money)
{
    feeds+=money/2;
    
}
feed::feed(int i)
{
    setFeed(i);
}
Hen::Hen(int count , int price)
{

    HenCount+=count;   
}
void Hen::setHen(int i)
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
void Hen::setEgg(int i )
{
    this->egg+=i/2;
}
Ship::Ship(int count, int price)
{
    ShipCount+=count;
}
void Ship::setShip(int price)
{
    ShipCount+=price/10;
}
int Ship::getShip()
{
    return this->ShipCount;
}
void Ship::setshipMilk(int feds)
{
    shipMilk += feds/3;
}
int Ship::getshipMilk()
{
    return this->shipMilk;
}
void Cow::setcheese(int value)
{
     if(value<0)
    {
        cout<<"wrong validate"<<endl;
        exit;//exception
    }
    if(value*3>cowMilk)
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
void Cow::setyogurt(int value)
{
    if(value<0)
    {
        cout<<"wrong validate"<<endl;
        exit;//exception
    }
    if(value*3>cowMilk)
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
void Cow::setcowMilk(int feds)
{
    cowMilk+=feds/5;
}
Cow::Cow(int count,int price)
{
    CowCount+=count;
   
}
void Cow::setcow(int price)
{
    CowCount+=price/20;
}
int Cow::getcow()
{
    return this->CowCount;
}
