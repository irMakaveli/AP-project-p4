#include <iostream>
#include "feed.hpp"
using namespace std;
int feed::getFeed(int count)//feed ghazaie heivanat ast
{   
    if(count > feeds)//baiad ghaza kafi bashad va manfi nabashad
    {
        cout<<"wrong value"<<endl;
        throw invalid_argument("not enough feed");
    } 
    else
    {
        this->feeds -= count;
        return count;
    }   
}

int feed::getFeed()//dastresi be oloofeh
{
    if(feeds==0)
    {
        throw invalid_argument("your feed is zero");
    }
    return feeds;
}
void feed::setFeed(int feedcount)
{
    feeds += feedcount;
}
int feed::buyFeed(int money)//money = meghdare oloofeh * gheymate oloofeh(2)
{
    if(money>=10)
    {
        feeds += 5;
        return money - 10;
    }
    else
    {
        feeds += money/2;
        return money%2;
    }
}
feed::feed(int i)
{
    feeds = i;//default
}
bool feed::operator+(int i)
{
    setFeed(i);
    return true;
}
