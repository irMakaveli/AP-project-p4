#ifndef CLASS_HPP
#define CLASS_HPP
class Money
{
    int money;
    public:
    Money(int);
    void setmoney(int );
    void operator-(int);
    int getmoney();
    int getmoney(int , int);
    void operator+(int);
};
class feed
{
    int feeds;
    public :
    feed(int);
    void setFeed(int);
    int getFeed();
    int getFeed(int ,int);
    bool operator+(int);
};
class animal
{
    protected:
    int price;
    int eat;
    public:
    void operator+(int);
    animal(int ,int);
    void set_price(int);
    int get_price();
    void set_eat(int);
    int get_eat();
};
class Hen : public animal
{
    int HenCount = 0;
    int egg = 0;
    public:
    void operator-( int );
    void operator+(int );
    Hen(int , int);//count , price
    void setHen(int);
    int getHen();
    void setEgg(int);
    int getEgg();
};
class Sheep : public animal
{
    int SheepCount=0;
    int sheepMilk=0;
    public:
    Sheep(int , int);
    void operator-(int);
    void operator+(int);
    void setSheep(int);
    int getSheep();
    void setsheepMilk(int);
    int getsheepMilk();
};
class Cow : public animal
{
    int yogurt=0;
    int cheese=0;
    int cowMilk=0;
    int CowCount=0;
    public:
    Cow(int , int );
    void operator-(int);
    void operator+(int);
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