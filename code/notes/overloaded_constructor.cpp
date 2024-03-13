#include <iostream>

class Rapper
{
    public:
        std::string name;
        std::string surname;
        int age;

        Rapper(std::string name)
        {
            this->name = name;
        }
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

int main(void)
{
    Rapper rapper1("Kendrick", "Duckworth", 35);
    Rapper rapper2("Nas");

    std::cout << rapper1.name << " " << rapper1.surname << ", Age: " << rapper1.age << '\n';
    std::cout << '\n';
    std::cout << rapper2.name << '\n';
    rapper1.rap();
    rapper1.jump(4);

    return 0;
}