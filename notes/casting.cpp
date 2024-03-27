#include <iostream>

class Base
{
    Base()
    {

    }
    ~Base()
    {

    }
};

int main()
{
    char c = 'A';
    int x = static_cast<int>(c);
    std::cout << x << '\n';

    int y = reinterpret_cast<Base*>(&c);

}