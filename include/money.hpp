#ifndef MONEY_HPP
#define MONEY_HPP
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
#endif // !MONEY_HPP