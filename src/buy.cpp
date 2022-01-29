#include <iostream>
#include "../include/buy.hpp"
#include "../include/cow.hpp"
#include "../include/money.hpp"
using namespace std;
void buy::buy_cow(Money & m)
{
    Cow s(0,20);
    m.setmoney( s.setcow( m.getmoney() ) );
    cow.push_back(s);
}
void buy::buy_hen(Money & m)
{
    Hen s(0,5);
    m.setmoney( s.setHen( m.getmoney() ) );
    hen.push_back(s);
}
void buy::buy_sheep(Money & m)
{
    Sheep s(0,15);
    m.setmoney( s.setSheep( m.getmoney() ) );
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
