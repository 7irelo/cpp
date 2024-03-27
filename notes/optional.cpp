#include <iostream>
#include <fstream>
#include <optional>

std::optional<std::string> ReadFileAsString(const std::string &filepath)
{
    std::fstream stream(filepath);
    if (stream)
    {
        std::string result;
        // read file;
        stream.close();
        // success = true;
        return result;
    }
    // success = false;
    return {};
}

int main()
{
    // bool success;
    std::optional<std::string> data = ReadFileAsString("file.txt");
    /*
    if (success)
    {
        std::cout << data << '\n';
    }
    */
    if (data.has_value()) // if (data)
    {
        std::cout << "File opened\n";
        auto log = *data;
        std::cout << log;
    }
}