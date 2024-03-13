#include <iostream>

void walk(int steps);

int main(void)
{
    walk(20);
    return 0;
}
void walk(int steps)
{
    if (steps > 0)
    {
        std::cout << "Step\n";
        walk(steps - 1);
    }
}