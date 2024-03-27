#include <iostream>

int factorial(int num);

int main(void)
{
    std::cout << factorial(3);
    return 0;
}
int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}