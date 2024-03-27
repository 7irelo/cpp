#include <iostream>

int search(int array[], int size, int my_num);

int main(void)
{
    int array[] = {10, 4, 5, 1, 3, 7, 8, 6, 2, 9};
    int size = sizeof(array)/sizeof(array[0]);

    int my_num;
    std::cout << "Search: ";
    std::cin >> my_num;

    int index = search(array, size, my_num);
    if (index != -1)
    {
        std::cout << "Index: " << index;
    }
    else
    {
        std::cout << "Not Found!";
    }
    return 0;
}

int search(int array[], int size, int my_num)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == my_num)
        {
            return i;
        }
    }
    return -1;
}