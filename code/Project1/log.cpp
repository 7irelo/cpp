#include <iostream>
#include "header.h"

void log(int hash)
{
	std::cout << hash << std::endl;
}
void log(const char* hash)
{
	std::cout << hash << std::endl;
}