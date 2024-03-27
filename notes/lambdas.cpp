#include <iostream>
#include <vector>
#include <algorithm>

#define LOG(x) std::cout << x << std::endl
#define LOG2(x, y) std::cout << x << y << std::endl


void log_vector(std::vector<int> &values, void(*print)(int))
{
    for (int value : values)
        print(value);
}

int main()
{
    std::vector<int> values = {1, 5, 4, 2, 3};
    // log_vector(values, [](int value) mutable { value = 5; std::cout << value << ", "; });
    /*
    - [] capture group, describes how variables should be passed in
    - [=], pass everything in by reference
    - [&], pass everything in by reference
    - [a], pass a by value
    - [&a], pass a by reference
    - int value is the input parameter
    - mutable always you to modify the variables passed in
    - constexpr is implied implicitly
    */
    auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
    std::cout << *it << std::endl;
    /*
    - .begin and .end are iterators/pointers
    - the find_if function takes in some type of iterator
    - return an iterator pointing to the 1st value greater than 3 between .begin and .end values inclusive
    - the lambda returns a boolean of true if the value is greater than 3
    */
}