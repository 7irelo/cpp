#include <iostream>

int main(void)
{
    std::string foods[10];

    // fill(begin, end, value)
    fill(foods, foods + 10, "pizza");
    for (std::string food : foods)
    {
        std::cout << food << " ";
    }
    return 0;
}