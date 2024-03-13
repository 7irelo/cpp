#include <iostream>

int main(void)
{
    int array[] = {10, 4, 5, 1, 3, 7, 8, 6, 2};
    for (int num : array)
    std::cout << num << ' ';
    return 0;
}