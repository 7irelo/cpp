#include <iostream>

enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    int day;
    do
    {
        day = 0;
        std::cout << "Day No.: ";
        std::cin >> day;
        day--;
        switch (day)
        {
            case Monday: std::cout << "It is Monday\n";
            break;
            case Tuesday: std::cout << "It is Tuesday\n";
            break;
            case Wednesday: std::cout << "It is Wednesday\n";
            break;
            case Thursday: std::cout << "It is Thursday\n";
            break;
            case Friday: std::cout << "It is Friday\n";
            break;
            case Saturday: std::cout << "It is Saturday\n";
            break;
            case Sunday: std::cout << "It is Sunday\n";
            break;
            default: std::cout << "Not a day\n";
            break;
        }
    }
    while (day < 0 || day > 6);
}