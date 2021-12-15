#ifdef _WIN
#include<windows.h>
#else 
#include <unistd.h>
#endif 
#include <iostream>
#include "buy.hpp"
#include <stdexcept>
#include<vector>
using namespace std;
int main()
{
   
    Cow a(1,20);
    Sheep b(1,15);
    Hen c(1,5);
    buy d;
    Money e(100);
    try
    {
        d.buy_hen(e);    
        d.buy_hen(e);    
        d.buy_hen(e);    
        d.buy_hen(e);    
        d.buy_hen(e);    
        d.buy_hen(e);
        c+6;
        c.setEgg(20);
        cout<<"tedad :"<<"\t"<<c.getHen()<<"\t"<<c.getEgg()<<"\t"<<e.getmoney()<<endl;    
    }
    catch(const invalid_argument & e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}