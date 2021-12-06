#include <iostream>
#include "class.hpp"
#include<vector>
using namespace std;
int main()
{
    vector<animal>f;
    Money d(300);
    Hen h(2,d.getmoney(2,5));
    f.push_back(h);
    h+10;
    Cow c(3 , d.getmoney(3,20));
    d.setmoney(-5);
    cout<<d.getmoney()<<"\t"<<h.getHen()<<"\t"<<c.getcow()<<endl;
    return 0;
}