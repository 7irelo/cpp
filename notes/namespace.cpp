#include <iostream>

namespace name 
{
    namespace eric 
    {
        const char *x = "The quick brown fox jumps over the lazy dog";
        void countdown(int limit) 
        {
            for (int i = 5; i > limit; i--) 
            {
                std::cout << i << "! mississippi\n";
            }
        }
    }
}
/*
- in-line namespace makes everything available to the parent namespace

namespace x
 {
     namespace y
     {
        #######
     }
 }
 can be written as
 namespace x::y
 {
    #########
 }
*/
int main() 
{
    name::eric::countdown(0);
    std::cout << name::eric::x << std::endl;
}