#include "../include/sheep.hpp"
using namespace std;
Sheep::Sheep(int count, int price):animal(3,price)//count tedad gusfand ha va price gheimate gusfand ha
{
    SheepCount = count;
    sheepMilk = 0;
}
Sheep::Sheep():Sheep(0 , 15){}
int Sheep::sellsheepproduct(string s)
{
    if(s == "sheep")
    {
        if(SheepCount >= 1)
        {
            SheepCount--;
            return 15;
        }
        else
        throw invalid_argument("no sheep for sell");
    }
    if(s== "milk")
    {
        if(sheepMilk >= 1)
        {
            sheepMilk--;
            return 10;
        }
        else
        throw invalid_argument("no milkfr sell");
    }
    return 0;
}
int Sheep::setSheep(int money)//kharide gusfand
{
    if(money>=price)
    {
        SheepCount += 1;
        return money - price;
    }
    else
    {
        throw invalid_argument("not enough money");
    }
}
int Sheep::getSheep()
{
    if(SheepCount==0)
    {
        throw invalid_argument("there is no sheep");
    }
    return this->SheepCount;//tedade gusfand ha
}
int Sheep::setsheepMilk(int feeds)//shire gusfand
{
    int neadedFeed =SheepCount * eat;
    int milk = feeds/eat;
    if(neadedFeed >= feeds)
    {
        if(milk==0)
        {
            return feeds%eat;
        }
        else
        {
            //sleep(5);
            sheepMilk += milk;
            return feeds%eat;
        }
    }
    else
    {
        //sleep(5);
        sheepMilk += SheepCount;
        return feeds - neadedFeed ;
    }
}
int Sheep::getsheepMilk()
{
    if(sheepMilk == 0)
    {
        throw invalid_argument("sheep milk is zero");
    }
    return this->sheepMilk;
}
void Sheep::operator-(int i)
{
    if( SheepCount - i>=0)
    {
        SheepCount = SheepCount - i;
    }
}
void Sheep::addmilk(int a)
{
    sheepMilk=a;
}
void Sheep::operator+(int i)
{
    SheepCount += i;
}
