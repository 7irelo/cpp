#include <iostream>

template <typename T, typename U>

auto max(T x, U y)
{
    return (x > y) ? x : y;
}

int main(void)
{

    std::cout << max('1', '2');
    return 0;
}