#include <iostream>
#include <vector>

#define LOG(x) std::cout << x << std::endl
#define LOG2(x, y) std::cout << x << y << std::endl

void print(int x)
{
    std::cout << x << ' ';
}

float log(int x)
{
    // LOG("Hello World"); 
    LOG2("Agent ", x);
    return 11.11f;
}
void log_vector(std::vector<int> &values, void(*func)(int))
{
    for (int value : values)
        func(value);
}

int main()
{
    // auto function = log;
    // void (*function)() = log;

    typedef float(*HelloWorld)(int);
    HelloWorld function = log;

    float x = function(47);
    function(69);
    LOG(x);
    /*
    - function point to the memory address of log
    - float is the return type matching
    - operator preceedence so parenthesis have to be added so the pointer can be declared before the call declaration
    - function is just the name of the function pointer
    - inside the parenthesis is the input data type
    - functions are just CPU instruction stored in memory
    - auto function = &log (implicit conversion, the reference operator can be omitted)
    - type def gives the pointer an alias
    - the function pointer is defined as a data type
    - HelloWorld is a function pointer type here
    - function is declared as a function pointer type and assigned the memory address of hello;
    - function is called with the input type
    */
    std::vector<int> values = {5, 8, 3, 6, 7, 1, 0, 2, 4, 9};
    log_vector(values, print);
}