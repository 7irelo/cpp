#include <iostream>

int main(void)
{
    int age;
    int *p;
    p = new int;
    std::cout << "Age: ";
    std::cin >> age;
    *p = age;
    std::cout << age << '\n';
    std::cout << *p << '\n';
    delete p;
    return 0;
}