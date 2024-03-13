#include <iostream>

int main()
{
	int x = 7;
	int y = 7;
	std::string line = x > 5 ? x > 10 ? "15" : "10" : "5";
	std::cout << line << std::endl;
}