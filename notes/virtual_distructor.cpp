#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base Constructed\n";
    }
    virtual ~Base()
    {
        std::cout << "Base Distructed\n";
    }
};
class Sub : public Base
{
public:
    Sub()
    {
        std::cout << "Sub Constructed\n";
    }
    ~Sub()
    {
        std::cout << "Sub Distructed\n";
    }
};
int main(void)
{
    Sub *sub = new Sub();
    delete sub;
    std::cout << "---------------\n";
    Base *poly = new Sub();
    delete poly;
    /*
    - we're assigning a pointer to a Sub type to a Base type
    - the pointer returned is actually a pointer to a Sub
    - the delete operator doesn't know this pointer is a Sub pointer
    */
}