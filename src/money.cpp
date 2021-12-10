#include <iostream>
#include "money.hpp"
using namespace std;
Money::Money(int money)
{
    this->money=0;//default
    setmoney(money);
}
void Money::operator+(int i)
{
    setmoney(i);
}
void Money::setmoney(int value)
{//validating
    if(value + money < 0)//meghdar sekkeh nabaiad manfi bashad 
    {
        cout<<"wrong value"<<endl;
        return;
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
int Money::getmoney(int count , int price)//return kardan meghdar khasi az sekkeh
{
    if((count*price)>money)//count*price hazineh baraye kharide chiz ha
    {
        cout<<"you have not enough money"<<endl;
        exit;//exception
    }
    if((count*price)<0)//hazineh nabaiad manfi bashad(validating)
    {
        cout<<"wrong values"<<endl;
        exit;//exception
    }

    this->money -=(count*price);//kam kardane yek hazineh moshakhas az sekeha
    return count*price;
}


void Money::operator-(int i)
{
    setmoney(i);
}
