#include <iostream>
#include <cmath>

int main(void)
{
    int month;
    std::cout << "Month: ";
    std::cin >> month;

    switch(month)
    {
        case 1:
            std::cout << "January";
            break;
        case 2:
            std::cout << "February";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6:
            std::cout << "June";
            break;
        case 7:
            std::cout << "July";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "December";
            break;
        default:
            std::cout << "Enter a number between 1 and 12";
    }
    return 0;
}