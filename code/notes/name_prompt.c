#include <iostream>

int main(void)
{
    std::string name;
    
    std::cout << "What's your name: ";
    std::cin >> name;
    std::cout << "Hi, " << name << std::endl;
    return 0;
}