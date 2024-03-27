#include <iostream>
#include <ctime>

int main(void)
{
    srand(time(0));
    int x = (rand() % 100) + 1;
    int guess;
    int tries = 0;

    do
    {
        std::cout << "Guess: ";
        std::cin >> guess;
        tries++;

        if (guess > x)
        {
            std::cout << "Too High!\n";
        }
        else if (guess < x)
        {
            std::cout << "Too Low!\n";
        }
        else
        {
            std::cout << "You Win! " << tries << " tries\n";
        }
    }
    while (guess != x);
    return 0;
}