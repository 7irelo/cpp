#include <iostream>
#include <cmath>

int main(void)
{
    int grade;
    std::cout << "Grade: ";
    std::cin >> grade;

    grade >= 50 ? std::cout << "Your Pass" : std::cout << "You Fail";
    return 0;
}