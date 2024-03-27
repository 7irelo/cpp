
#include <iostream>
#include <map>
#include <vector>

struct Player
{
private:
    std::string name;
    std::string surname;
    int number;

public:
    Player(const std::string &n, const std::string &s, int numb)
        : name(n), surname(s), number(numb) {}
    const std::string &get_name() const { return name; }
    const std::string &get_surname() const { return surname; }
    int get_number() const { return number; }

    bool is_named(const std::string &n) const
    {
        return name == n;
    }
};

int main()
{
    std::map<std::string, Player> players;
    players.insert({"messi", Player{"Lionel", "Messi", 10}});
    auto iter = players.find("messi");
    if(iter != players.end())
    {
        Player &messiData = iter->second;
        std::cout << messiData.get_name() << std::endl;
    }
    else
    {
        std::cout << "Player not found." << std::endl;
    }
}