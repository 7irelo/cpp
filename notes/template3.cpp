#include <iostream>
#include <string>

template<typename T, int N>
class Array
{
private:
    T m_Array[N];
public:
    void set0(std::string string)
    {
        m_Array[0] = string;
    }
    void set1(std::string string)
    {
        m_Array[1] = string;
    }
    int getSize() const
    {
        return N;
    }
    std::string get0() const
    {
        return m_Array[0];
    }
    std::string get1() const
    {
        return m_Array[1];
    }
};

int main(void)
{
    Array<std::string, 2> array;
    array.set0("Eric");
    array.set1("Ncube");
    std::cout << "Array size: " << array.getSize() << '\n';
    std::cout << "Name: " << array.get0() << '\n';
    std::cout << "Surname : " << array.get1() << '\n';
}