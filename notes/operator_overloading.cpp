#include <iostream>

struct Vect
{
	float x, y;
	Vect(float x, float y)
		: x(x), y(y) {}
	Vect Add(const Vect &other) const
	{
		return Vect(x + other.x, y + other.y);
	}
	Vect operator+(const Vect &other) const
	{
		return Vect(x + other.x, y + other.y);
	}
	/*
	- Vect is the return type
	- operator+ replaces the function name
	- other is the Vect in front of the operator
	- it return a vector with changed parameters
	*/
};

int main(void)
{
    Vect position(2.4f, 5.6f);
	Vect speed(4.6f, 5.4f);
	Vect result = position + speed;
	Vect addresult = position.Add(speed);
	std::cout << "result x = " << result.x << ", result y = " << result.y << std::endl;
	std::cout << "addresult = " << addresult.x << ", addresult y = " << addresult.y << std::endl;
}