#include <iostream>
#include "../include/money.hpp"
using namespace std;
Money::Money():Money(200)
{

}
Money::Money(int money)
{
    this->money=money;
}
void Money::operator+(int i)
{
    setmoney(i);
}
void Money::operator-(int i)
{
    getmoney(i);
}
void Money::setmoney(int m)
{
    money = m;
}
void Money::addmoney(int value)
{//validating
    if(value + money < 0)//meghdar sekkeh nabaiad manfi bashad 
    {
        throw invalid_argument("you have not enough money");
    } 
    else
    {
        this->money += value;
    }
}
int Money::getmoney()//dastresi be sekkeha
{
    return this->money;
}
int Money::getmoney(int i)//return kardan meghdar khasi az sekkeh
{
    if(i <0 || i >money)//hazineh nabaiad manfi bashad(validating)
    {
        throw invalid_argument("invalid value for money");
    }
    this->money -=(i);//kam kardane yek hazineh moshakhas az sekeha
    return i;
}

