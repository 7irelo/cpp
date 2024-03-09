#include <iostream>
#include <cmath>

int main(void)
{
    int height;
    std::cout << "Height: ";
    do
    {
        cin.getline(std::cin, height);
        std::cout << "Height is " << height;
        if (!(std::cin >> height))
        {
            std::cout << "invalid input\n";
            std::cin.clear();
            std::cin.ignore();
        }
        else if (height < 1)
        {
            std::cout << "Enter height greater that 0\n";
        }
        else
        {
            break;
        }
        std::cout << "Height: ";
    }
    while (true);
    
    for (int i = 0; i < height; i++)
    {
        for (int k = 0; k < height - i - 1; k++)
        {
            std::cout << " ";
        }
        
        for (int j = 0; j <= i; j++)
        {
            std::cout << '#';
        }
        std::cout << '\n';
    }
    return 0;
}