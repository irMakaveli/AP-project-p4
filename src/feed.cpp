#include <iostream>
#include "feed.hpp"
using namespace std;
int feed::getFeed(int count,int fed)//feed ghazaie heivanat ast
{
    
    if((count < 0 && count *fed < 0)||count*fed> feeds)//baiad ghaza kafi bashad va manfi nabashad
    {
        cout<<"wrong value"<<endl;
        exit;//exception
    } 
    else
    {
        this->feeds -= fed*count;
    }   
    return fed*count;
}

int feed::getFeed()//dastresi be oloofeh
{
    return feeds;
}
void feed::setFeed(int money)//money = meghdare oloofeh * gheymate oloofeh(2)
{
    feeds+=money/2;
}
feed::feed(int i)
{
    feeds = 0;//default
    setFeed(i);
}
bool feed::operator+(int i)
{
    setFeed(i);
    return true;
}
