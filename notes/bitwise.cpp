#include <iostream>
#include <cstring>


int main(void)
{
    int a = 1;
    std::cout << "a = ";
    for (int i = 0; i < 12; i++)
    {
        a <<= 1;
        std::cout << a << ", ";
    }
    std::cout << std::endl;

    int b = 4096;
    std::cout << "b = ";
    for (int i = 0; i < 12; i++)
    {
        std::cout << b << ", ";
        b >>= 1;
    }
    std::cout << std::endl;
    /*
    - bit shifting left doubles the value
    - right halves
    - var <<= n, var*2^(n)
    - var >>= n, var/2^(n)
    */
    int x = 1; // 0000 0001
    int y = 3; // 0000 0011

    unsigned int z = x & y; // 0000 0001
    std::cout << "z = " << z << '\n';

    z = x | y; // 0000 0011
    std::cout << "z = " << z << '\n';
    /*
    - & returns 1 if both of the bits are 1 otherwise 0
    - | retruns 1 if one of either of the bits is 1
    */
    z = x ^ y; // 0000 0010
    std::cout << "z = " << z << '\n';
    /*
    - ^ returns 0 if both bits are equal
    */
    z = ~y; 
    /*
    - 1111 1111 1111 1111 1111 1111 1111 1100 (unsigned)
    - 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1100 (signed)
    */
    std::cout << "z = " << z << '\n';
    /*
    - ~ returns 0 if 1 and 1 if 0
    */
}