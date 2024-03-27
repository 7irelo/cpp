#include <iostream>
#include <any>

int main()
{
    std::any data;
    data = std::string("Eric");
    auto var = std::any_cast<std::string>(data);
    std::cout << var << std::endl;
}