#include <iostream>
#include <string>
#include <memory>

class Entity
{
	public:
		Entity()
		{
			std::cout << "Created entity\n";
		}
		~Entity()
		{
			std::cout << "Destroyed Entity\n";
		}
	void Print()
	{

	}
};

int main(void)
{
    {  
        std::shared_ptr<Entity> ptr;
        {
            std::shared_ptr<Entity> sharedPointer = std::make_shared<Entity>();
            std::weak_ptr<Entity> weakPointer = sharedPointer;
            ptr = sharedPointer;
			/*
			- shared = shared increases the ref count
			- weak = shared won't increase
			- weak does keep the object alive
			*/
        }
    }
}