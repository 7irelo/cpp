#include <iostream>

class Rapper
{
    public:
        std::string name;
        std::string surname;
        int age;

        Rapper(std::string name, std::string surname, int age)
        {
            this->name = name;
            this->surname = surname;
            this->age = age;
        }

        void rap(void)
        {
            std::cout << name << " is rapping\n";
        }
        void jump(int num)
        {
            std::cout << name << " jumps " << num << " times\n";
        }
};