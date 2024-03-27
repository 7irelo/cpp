#include <iostream>
#include <string>
#include <memory>

class Entity
{
	private:
		std::string name;
	public:
		Entity(std::string name) : name(name)
		{
			std::cout << "Created entity\n";
		}
		~Entity()
		{
			std::cout << "Destroyed Entity\n";
		}
	void Print()
	{
		std::cout << "Entity: " << this->name << std::endl;
	}
};

int main(void)
{
    {
		// std::unique_ptr<Entity> entity(new Entity("Eric"));
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
		/*
		- <Entity> is a template argument
		- You can't do = new Entity(), the constructor has to be called explicitly
		- entity is the name
		- The constructor has to be called explicitly when using new Entity()
		- new Entity returns a pointer to an Entity
		- make_unique is safer for avoiding exceptions
		- You can't copy a unique pointer
		*/
	entity->Print();
	}
}