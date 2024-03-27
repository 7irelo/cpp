#include <iostream>
#include <ctime>

int main(void)
{
    srand(time(0));
    int x = rand() % 5 + 1;

    switch(x)
    {
        case 1: std::cout << "bag";
                break;
        case 2: std::cout << "mom";
                break;
        case 3: std::cout << "eric";
                break;
        case 4: std::cout << "nana";
                break;
        case 5: std::cout << "sica";
                break;
        case 6: std::cout << "lindi";
                break;
    }
    return 0;
}