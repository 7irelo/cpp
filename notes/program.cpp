#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

struct Player
{
    std::string name;
    std::string surname;
    int number;

    // Player(std::string name, std::string surname, int number)
        // : name(name), surname(surname), number(number) {}
};
/*
namespace std {

    template<>
    struct hash<Player>
    {
        size_t operator()(const Player &key)
        {
            return hash<std::string>()(key.name);
        }
    };
}
*/

int main()
{
    std::map<std::string, Player> players;
    players["messi"] = Player { "Lionel", "Messi", 10 };
    players["cristiano"] = Player { "Cristiano", "Ronaldo", 7 };
    players["neymar"] = Player { "Neymar", "Junior", 11 };
    players["suarez"] = Player { "Luis", "Suarez", 0 };

    // std::unordered_map<Player, std::string> club;
    // club[Player{ "Lionel", "Messi", 10 }] = "Barcelona";

    std::cout << players["messi"].name << " is the GOAT" << std::endl;
    
    for (auto &[surname, player] : players) // for (const auto &player : players)
    {
        static int i = 1;
        std::cout << surname << std::endl;
        i++;
    }
}