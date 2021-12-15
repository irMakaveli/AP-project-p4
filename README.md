# AP-project-p3
cattleman
in phase 3 exception and class buy was added. 
class buy hve 3 vector of class Hen, Cow and Sheep.
you can increase your money with buy animals and generate products.

data members:

std::vector<Cow> cow;
std::vector<Hen> hen;
std::vector<Sheep> sheep;

member functions:

void buy_cow(Money &);--->to buy a cow.
void buy_hen(Money &);--->to buy a hen.
void buy_sheep(Money &);--->to buy a sheep.
int getcow();--->return cow's size.
int gethen();---> return hen's size.
int getsheep();---> return sheep's size.