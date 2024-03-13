#include <iostream>

int main(void)
{
    bool vote;
    std::cout << "Vote: ";
    std::cin >> vote;

    std::cout << (vote ? "TRUE" : "FALSE");
    return 0;
}