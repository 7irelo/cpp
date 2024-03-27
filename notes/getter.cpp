#include <iostream>

class Stove
{
    private:
        int temp = 50;
    public:
    int getTemp()
    {
        return temp;
    }
};

int main(void)
{
    Stove stove;

    std::cout << stove.getTemp() << '\n';
}