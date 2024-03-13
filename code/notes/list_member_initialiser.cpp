#include <iostream>

class Example
{
	public:
		Example()
		{
			std::cout << "Create Entity\n";
		}
		Example(int x)
		{
			std::cout << "Creator Entity with " << x << std::endl; 
		}
};
class Entity
{
	private:
		std::string m_Name;
		Example m_Example;
	public:
		Entity() : m_Example(Example(8))
		{
			m_Name = "Unknown";
		}
		Entity (std::string &name)
		{
			m_Name = name;
		}
		std::string getName()
		{
			return m_Name;
		}
};
int main()
{
	Entity e;
}