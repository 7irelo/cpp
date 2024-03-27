#include <iostream>

int main(void)
{
    int age;
    std::cout << "How old are you: ";
    std::cin >> age;

    std::string name;
    std::cout << "What is your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hi " << name << '\n';
    std::cout << "Your are " << age << " years old" << '\n';

    return 0;
}