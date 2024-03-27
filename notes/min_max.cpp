#include <iostream>

int main(void)
{
    double x = 0;
    double y = 9;

    double a = std::min(x, y);
    double b = std::max(x, y);

    std::cout << "min: " << a << " max: " << b;

    return 0;
}