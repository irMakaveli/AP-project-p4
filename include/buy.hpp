#ifndef BUY_HPP
#define BUY_HPP
#include <vector>
#include "sheep.hpp"
#include  "hen.hpp"
#include "cow.hpp"
#include "money.hpp"
class buy
{
    std::vector<Cow> cow;
    std::vector<Hen> hen;
    std::vector<Sheep> sheep;
    public:
    void buy_cow(Money &);
    void buy_hen(Money &);
    void buy_sheep(Money &);
    int getcow();
    int gethen();
    int getsheep();
};
#endif