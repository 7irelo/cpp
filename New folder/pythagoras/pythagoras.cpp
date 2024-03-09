#include <iostream>
#include <cmath>

int main(void)
{
    double a;
    double b;
    std::cout << "Adjacent: ";
    std::cin >> a;
    std::cout << "Opposite: ";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Hypotenuse = " << c;
    return 0;
}