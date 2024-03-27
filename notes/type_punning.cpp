#include <iostream>

struct Entity
{
    int x, y;
    int *GetPositions()
    {
        return &x;
    }
};

int main(void)
{
        /*
        int a = 50;
        double b = a; // implicit conversion
        std::cout << b << '\n';
        */
       /*
        int x = 50;
        double y = *((double*)&x);
        std::cout << y << std::endl;
        int a = 50;
        double &b = *((double*)&a);
        std::cout << b << std::endl;
        */
        /*
        - &a returns a pointer i.e the address of a
        - the address of a is cast into a double pointer/address
        - his pointer/address is dereferenced to get the value
        - b is set to the value
        - b isn't created it's just a reference to double a
        */
    
    Entity e = { 6, 9 };

    // int *array = (int*)&e;
    int *array = e.GetPositions();
    int x = *(int*)((char*)&e + 4);
    array[0] = 11;
    array[1] = 12;
    std::cout << "array address = " << array << std::endl;
    std::cout << "e address = " << &e << std::endl;
    std::cout << "e.y: " << *(int*)((char*)&e + 4) << std::endl;
    std::cout << "x = " << *array << ", y = "<< *(array + 1) << '\n';
    std::cout << "x = " << array[0] << ", y = "<< array[1] << '\n';
    std::cout << "y = " << *(array + 2) << '\n';
    std::cout << "out of bounds = " << array[2] << '\n';
    std::cout << "int x = " << x << std::endl;
}