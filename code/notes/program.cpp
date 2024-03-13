#include <iostream>

int main(void)
{
    int *number = new int[2];
	number[0] = 1;
	number[1] = 5;
	std::cout << *(number + 1) << std::endl;
	delete number;
}