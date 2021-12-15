#include "sheep.hpp"
using namespace std;
Sheep::Sheep(int count, int price):animal(3,price)//count tedad gusfand ha va price gheimate gusfand ha
{
    SheepCount = count;
    sheepMilk = 0;
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
            sleep(5);
            sheepMilk += milk;
            return feeds%eat;
        }
    }
    else
    {
        sleep(5);
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
void Sheep::operator+(int i)
{
    SheepCount += i;
}