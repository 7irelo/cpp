#include <iostream>
#include <cstring>

template<typename T, size_t S>
class Array
{
public:
    constexpr int size() const // constexpr specifies that the function can be evaluated at compile time. 
    {
        return S;
    }
    T &operator[](size_t index)
    {
        return array[index];
    }
    T *Data()
    {
        return array;
    }
private:
    T array[S];
};

int main(void)
{
    Array<int, 5> array;


    static_assert(array.size() < 10, "Size too large");
    Array<std::string, array.size()> another;
    memset(array.Data(), 0, array.size() * sizeof(int));
    // memset(array[0], 0, array.size() * sizeof(int))
    /*
    - the static_assert checks if the array is greater than 10, else it adds the marriage
    - array.size() has to be a constexpr
    - array can be used to build another;
    - memset sets the array values to 0;
    */

    for (int i = 0; i < array.size(); i++)
    {
        std::cout << array[i] << '\n';
    }
}