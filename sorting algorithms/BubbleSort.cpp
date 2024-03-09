#include <iostream>

typedef struct
    {
        std::string name;
        double grade;
    }
    student;

int main(void)
{
    int input;
    {
        while (true)
        {
            std::cout << "\nHow many grades do you want to sort: ";
            if (!(std::cin >> input))
            {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Incorrect entry. Try again\n";
            }
            else
            {
                break;
            }
        }
    }

    int amount = input;
    student* array = new student[amount];
    for (int i = 0; i < amount; i++)
    {
        std::cout << "\nStudent " << i + 1 << "'s first name: ";
        std::cin >> array[i].name;
        
        while (true)
        {
            std::cout << array[i].name << "'s grade (Enter num 0 - 100): ";
            if (!(std::cin >> array[i].grade))
            {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Incorrect entry. Try again\n";
            }
            else
            {
                break;
            }
        }
    }
    std::cout << "\nGrade Chart\n";
    std::cout << "\n**********************\n";

    for (int i = 0; i < amount - 1; i++)
    {
        for (int j = amount - i; j > 0; j--)
        {
            if (array[j].grade > array[j - 1].grade)
            {
                student temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < amount; i++)
    {
        std::cout << i + 1 << ". " << array[i].name << ", Grade: " << array[i].grade << '\n';
    }
    std::cout << "\n**********************\n";
    std::cout << "Press any key to quit....";
    delete[] array;
    std::cin.ignore();
    std::cin.get();
    return 0;
}