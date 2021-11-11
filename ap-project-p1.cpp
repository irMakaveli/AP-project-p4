#include <iostream>
using namespace std;
class Money
{
    int money;
    public:
    Money(int);
    void setmoney(int );
    int getmoney();
    int getmoney(int , int);
};
Money::Money(int money)
{
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
class feed
{
    int feeds;
    public :
    feed(int);
    void setFeed(int);
    int getFeed();
    int getFeed(int ,int);
    void eated(int i);
};
int feed::getFeed(int count,int fed)
{
    
    if((count < 0 && count *fed < 0)||count*fed> feeds)
    {
        cout<<"wrong value"<<endl;
        return;
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
class Hen
{
    int HenCount=0;
    int egg=0;
    public:
    Hen(int , int);//count , price
    void setHen(int);
    int getHen();
    void setEgg(int );
    int getEgg();
};
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
class Ship
{
    int ShipCount=0;
    int shipMilk=0;
    public:
    Ship(int , int);
    void setShip(int);
    int getShip();
    void setshipMilk(int);
    int getshipMilk();
};
class Cow
{
    int yogurt;
    int butter;
    int cowMilk;
    int CowCount;
    public:
    Cow(int , int );
    void setcow(int);
    int getcow();
    void setcowMilk(int);
    int getcowMilk();
    void setbutter(int);
    int getbutter();
    void setyogurt(int);
    int getyogurt();
};
int main()
{

    return 0;
}