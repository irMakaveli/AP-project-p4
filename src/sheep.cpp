#include "sheep.hpp"
using namespace std;
Sheep::Sheep(int count, int price):animal(3,price)//count tedad gusfand ha va price gheimate gusfand ha
{
    SheepCount += count;
}
void Sheep::setSheep(int price)//kharide gusfand
{
    SheepCount += price/10;
}
int Sheep::getSheep()
{
    return this->SheepCount;//tedade gusfand ha
}
void Sheep::setsheepMilk(int feds)//shire gusfand
{
    sheepMilk += feds/3;
}
int Sheep::getsheepMilk()
{
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
    setSheep(i*10);
}
