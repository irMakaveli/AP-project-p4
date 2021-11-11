#ifndef CLASS_HPP
#define CLASS_HPP
class Money
{
    int money;
    public:
    Money(int);
    void setmoney(int );
    int getmoney();
    int getmoney(int , int);
};

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
    int yogurt=0;
    int cheese=0;
    int cowMilk=0;
    int CowCount=0;
    public:
    Cow(int , int );
    void setcow(int);
    int getcow();
    void setcowMilk(int);
    int getcowMilk();
    void setcheese(int);
    int getcheese();
    void setyogurt(int);
    int getyogurt();
};

#endif // !CLASS_HPP
