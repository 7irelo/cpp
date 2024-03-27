#include <iostream>
#include <thread>

static bool s_finished = false;

void do_work()
{
    using namespace std::literals::chrono_literals;
    while(!s_finished)
    {
        std::cout << "working...\n";
        std::this_thread::sleep_for(1s);
    }
}
int main()
{
    std::thread worker(do_work);
    std::cin.get();
    s_finished = true;
    worker.join();
    //the main thread should wait for the worker thread to finish executing
    std::cin.get();
}