#include <iostream>

int main(void)
{
    std::string foods[12];

    // fill(begin, end, value)
    fill(foods, foods + (sizeof(foods) / sizeof(foods[0])) / 2, "pizza");
    fill(foods + (sizeof(foods) / sizeof(foods[0])) / 2, foods + (sizeof(foods) / sizeof(foods[0])), "burger");
    
    for (std::string food : foods)
    {
        std::cout << food << " ";
    }
    return 0;
}