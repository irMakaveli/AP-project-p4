#include <iostream>
#include "buy.hpp"
#include "cow.hpp"
#include "money.hpp"
using namespace std;

void buy::buy_cow(Money & m)
{
    Cow s(1,20);
    cow.push_back(s);
    m.setmoney(-20);
}
void buy::buy_hen(Money & m)
{
    Hen s(1,5);
    hen.push_back(s);
    m.setmoney(-5);
}
void buy::buy_sheep(Money & m)
{
    Sheep s(1,15);
    m.setmoney(-15);
    sheep.push_back(s);
}
int buy::getcow()
{
    return cow.size();
}    
int buy::gethen()
{
    return hen.size();
}
int buy::getsheep()
{
    return sheep.size();
}