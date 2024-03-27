#include <iostream>
#include <string>
#include <thread>
#include <tuple>

std::tuple<std::string, int> create_human()
{
    std::string name;
    int age;
    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Age: ";
    std::cin >> age;

    return { name, age };
}
void cout_down()
{
    using namespace std::literals::chrono_literals;
    for (int i = 20; i > 0; i--)
    {
        std::cout << i << '\n';
        std::this_thread::sleep_for(1s);
    }
    std::cout << "0\n";
}

int main()
{
    // std::tuple<std::string, int> human = create_human();
    // auto &name = std::get<0>(human);
    // auto &age = std::get<1>(human);

    // std::string name;
    // int age;
    // std::tie(name, age) = create_human();
    /*
    - passed in by reference
    - no tuple has to be created
    */
    auto[name, age] = create_human();

    std::cout << name << " is " << age << " years old\n";
    // cout_down();

}