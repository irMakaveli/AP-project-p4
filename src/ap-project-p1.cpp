#include <iostream>
#include "class.hpp"
using namespace std;
int main()
{
    Money d(300);
    Hen h(2,d.getmoney(2,5));
    Cow c(3 , d.getmoney(3,20));
    d.setmoney(-5);
    cout<<d.getmoney()<<"\t"<<h.getHen()<<"\t"<<c.getcow()<<endl;
    return 0;
}