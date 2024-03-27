#include <iostream>
#include <array>

#define LOG(x) std::cout << x << std::endl

int main()
{
    std::array<std::string, 2> data = {"Eric", "Ncube"};
    for (auto it = data.begin(); it != data.end(); it++)
        LOG(*it);
}