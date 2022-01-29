#ifndef MONEY_HPP
#define MONEY_HPP
#include <stdexcept>
class Money
{
    int money;
    public:
    Money(int);
    Money();
    void addmoney(int );
    void setmoney(int );
    int getmoney();
    int getmoney(int);
    void operator+(int);
    void operator-(int);
};
#endif // !MONEY_HPP
