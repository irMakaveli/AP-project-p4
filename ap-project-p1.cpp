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
    void eated(int i);
};
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
    int HenCount;
    int egg=0;
    public:
    Hen(int , int);//count , price
    void setHen(int);
    int getHen();
    void setEgg(int);
    int getEgg();
};

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