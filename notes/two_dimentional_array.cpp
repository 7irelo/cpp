#include <iostream>

int main()
{
    int *numbers = new int[4];
    /*
    - new returns a pointer to memory big enough for 4 ints
    - numbers is equated to this new int pointer
    */
    int **numb = new int*[4]
    /*
    - new returns a pointer to memory big enough for 4 pointers
    - numb, which is a pointer to a pointer, is equated to this new int pointer
    */

    delete[] numbers;
}