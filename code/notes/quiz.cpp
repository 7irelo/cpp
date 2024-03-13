#include <iostream>

int main(void)
{
    std::string questions[] = {"1. Who replaced Judas as one of the 12 apostles",
                               "2. Who wrote Revelation", 
                               "3. What is 666 in gematria",
                               "4. Who is the Messiah"};

    std::string options[][4] = {{"A. Joseph" , "B. Barsabas", "C. Matthias", "D. Justus"},
                                {"A. Moses", "B. Mark", "C. Eminem", "D. John"},
                                {"A. Lil Nas X", "B. Satan", "C. The Beast", "D. Nero"},
                                {"A. Jesus", "B. Lionel Messi", "C. Mohammad", "D. Eric"}};
    
    
    char answer[] = {'C', 'D', 'D', 'A'};

    std::string name;
    std::cout << "What is your name: ";
    std:getline(std::cin, name);
    char flay;
    std::cout << "Hi " << name << ", would you like to play a game\n";
    do
    {
        std::cout << "Y/N: ";
        std::cin >> flay;
        flay = toupper(flay);
    }
    while (!flay == 'Y' || !flay == 'N');
    if (flay == 'N')
    {
        return 1;
    }

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int points = 0;

    std::cout << '\n';
    std::cout << "******************* WELCOME *******************" << '\n';
    std::cout << '\n';

    for (int i = 0; i < size; i++)
    {
        std::cout << questions[i] << '\n';
        std::cout << '\n';

        do
        {
            for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
            {
                std::cout << options[i][j] << "  ";
            
            }
            std::cout << '\n';
            std::cout << "Answer: ";
            std::cin>> guess;
            guess = toupper(guess);
        }
        while (guess  < 'A' || guess > 'D');
        if (guess == answer[i])
        {
            std::cout << "Correct\n";
            std::cout << '\n';
            std::cout << "**********************************************\n";
            points++;
        }
        else
        {
            std::cout << "Wrong. The answer is " << answer[i] << '\n';
            std::cout << '\n';
            std::cout << "**********************************************\n";
        }
    }
    
    switch (points)
    {
        case 0 : std::cout << name <<" you got " << points << " (" << ((double) points / size) * 100 << "%) questions correct! You need deliverance." << '\n';
        break;
        case 1 : std::cout << name <<" you got " << points << " (" << ((double) points / size) * 100 << "%) questions correct! 0 would have been a less embarrasing score." << '\n';
        break;
        case 2 : std::cout << name <<" you got " << points << " (" << ((double) points / size) * 100 << "%) questions correct! Pull up your socks." << '\n';
        break;
        case 3 : std::cout << name <<" you got " << points << " (" << ((double) points / size) * 100 << "%) questions correct! Good. Nah, honestly... you did well." << '\n';
        break;
        case 4 : std::cout << name <<" you got " << points << " (" << ((double) points / size) * 100 << "%) questions correct! Excellent. Satan shakes at the mention of your name." << '\n';
        break;
    }
    std::cout << '\n';
    std::cout << "************ THANK YOU FOR PLAYING ************" << '\n';
    return 0;
}