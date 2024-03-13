#include <iostream>

int main(void)
{
    typedef struct
    {
        std::string name;
        double grade;
    }
    student;
    char retry = 'Y';
    while (retry == 'Y')
    {
        char input;
        do
        {
            std::cout << "\nHow many grades do you want to sort: ";
            std::cin >> input;
        }
        while (isalpha(input));
        int amount = input - '0';
        
        
        student array[amount];
        for (int i = 0; i < amount; i++)
        {
            std::cout << "\nStudent " << i + 1 << "'s first name: ";
            std::cin >> array[i].name;
            std::string input;
            std::cout << array[i].name << "'s grade (Enter num 0 - 100): ";
            std::cin >> input;
            array[i].grade = (double) stoi(input);
        }
        std::cout << "\nGrade Chart\n";
        std::cout << "**********************\n";

        for (int i = 0; i < amount - 1; i++)
        {
            for (int j = 0; j < amount - i - 1; j++)
            {
                if (array[j].grade > array[j + 1].grade)
                {
                    student temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < amount; i++)
        {
            std::cout << amount - i << ". " << array[i].name << ", Grade: " << array[i].grade << '\n';
        }
        std::cout << "**********************\n";
        do
        {
            std::cout << "\nRetry (Y/N): ";
            std::cin >> retry;
            retry = toupper(retry);
        }
        while (retry != 'N' && retry != 'Y');
    }
    return 0;
}