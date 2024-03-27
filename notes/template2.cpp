#include <iostream>
#include <string>

// template <typename T, typename U>
template <typename T>

void print(T value)
{
    std::cout << value << '\n';
}

int main(void)
{
    print<std::string>("Eric");
    print("Ncube");
}