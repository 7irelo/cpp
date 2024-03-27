#include <iostream>
#include <thread>
#include <chrono>

struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;
    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000;
        std::cout << "That took: " << duration.count() << "s" << std::endl;
    }
};

void function()
{
    Timer timer;
    using namespace std::literals::chrono_literals;
    for (int i = 100; i > 0; i--)
    {
        std::cout << i << '\n';
        std::this_thread::sleep_for(1s);
    }
}

int main()
{
    /*
    using namespace std::literals::chrono_literals;
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1s);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    std::cout << "Duration: " << duration.count() << std::endl;
    */
    function();
    std::cin.get();
}