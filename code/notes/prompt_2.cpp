#include <iostream>

int main(void)
{
    std::string name;
    std::cout << "What's your name: ";
    std::getline(std::cin, name);

    int age;
    std::cout << "How old are you: ";
    std::cin >> age;

    std::cout << "Hi " << name << std::endl;
    std::cout << "Your are " << age << " years old" << '\n';
    return 0;
}