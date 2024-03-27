#include <iostream>
#include <variant>

template<int size, typename type>
struct Array
{
    type vector[size];
};

int main()
{
    std::variant<std::string, int> data;
    data = 22;
    std::cout << "Age: " << std::get<int>(data) << '\n';
    std::cout << "index: " << data.index() << '\n';
    data = "Eric Ncube";
    std::cout << std::get<std::string>(data) << '\n';
    std::cout << "index: " << data.index() << '\n';
    std::cout << *(std::get_if<std::string>(&data)) << std::endl;
    Array<2, std::string> x;
    x.vector[0] = "Foo";
    x.vector[1] = "Bar";
    for (int i = 0; i < sizeof(x.vector) / sizeof(x.vector[0]); i++)
        std::cout << x.vector[i] << std::endl;

    std::cout << "size: " << sizeof(std::string);
}