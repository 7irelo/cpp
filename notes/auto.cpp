#include <iostream>
#include <string>
#include <vector>

#define LOG(x) std::cout << x << '\n'
const char *getName()
{
    return "Eric";
}

int main()
{
    auto a = 5;
    auto name = getName();
    float x = ((std::string)name).size();
    LOG(x);

    std::vector<std::string> strings;
    strings.emplace_back("Eric");
    strings.emplace_back("Ncube");
    
    /*
    for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
        LOG(*it);
    */
    for (auto it = strings.begin(); it != strings.end(); it++)
        LOG(*it);
    
    LOG(*(strings.begin()));
}