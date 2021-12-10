#ifndef ANIMAL_HPP
#define ANIMAL_HPP
class animal
{
    protected:
    int price;
    int eat;
    public:
    void operator+(int);
    animal(int ,int);
    void set_price(int);
    int get_price();
    void set_eat(int);
    int get_eat();
};
#endif