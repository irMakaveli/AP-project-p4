#include "../include/animal.hpp"
using namespace std;
animal::animal(int c ,int p)
{
    set_price(p);
    set_eat(c);
}
void animal::set_price(int p)
{
    price = p;
}
int animal::get_price()
{
    return price;
}
void animal::set_eat(int i)
{
    eat = i;
}
int animal::get_eat()
{
    return eat;
}
void animal::operator+(int)
{
        
}
