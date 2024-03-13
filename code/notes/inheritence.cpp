#include <iostream>

class Animal
{
    public:
        bool alive = true;
        std::string species;

    void eat(void)
    {
        std::cout << "This " << species << " is eating\n";
    }
};
class Zebra : public Animal
{
    public:
        std::string gender;

        void graze()
        {
            std::cout << "This " << gender << ' ' << species << " is eating\n";
        }
};

int main(void)
{
    Zebra zebra;
    zebra.species = "zebra";
    zebra.gender = "male";
    zebra.eat();
    return 0;
}