#include <iostream>

using namespace std;

int main(void)
{
    typedef struct
    {
        string name;
        double grade;
    }
    student;

    char retry = 'Y';
    // Declare the array
    while (retry == 'Y')
    {
        int amount;
        {
            while (true)
            {
                cout << "\nHow many grades do you want to sort: ";
                if (!(cin >> amount))
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Incorrect entry. Try again\n";
                }
                else
                {
                    break;
                }
            }
        }
        // Populate the array
        student array[amount];
        for (int i = 0; i < amount; i++)
        {
            cout << "\nStudent " << i + 1 << "'s first name: ";
            cin >> array[i].name;
            
            while (true)
            {
                cout << array[i].name << "'s grade (Enter num 0 - 100): ";
                if (!(cin >> array[i].grade))
                {
                    cin.clear();
                    cin.ignore();
                    cout << "Incorrect entry. Try again\n";
                }
                else
                {
                    break;
                }
            }
        }
        cout << "\nGrade Chart\n";
        cout << "\n**********************\n";
        // Sort the array
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
        // Print the chart
        for (int i = 0; i < amount; i++)
        {
            cout << i + 1 << ". " << array[i].name << ", Grade: " << array[i].grade << '\n';
        }
        cout << "\n**********************\n";
        do
        {
            cout << "\nRetry (Y/N): ";
            cin >> retry;
            retry = toupper(retry);
        }
        while (retry != 'N' && retry != 'Y');
    }
    return 0;
}