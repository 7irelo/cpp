#include <iostream>

class Stove
{
    private:
        std::string name = "Samsung";
        int temp;
    
    public:
    Stove(int temp)
    {
        setTemp(temp);
    }
    void setTemp(int temp)
    {
        if (temp < 0)
        {
            this->temp = 0;
        }
        else if (temp > 100)
        {
            this->temp = 100;
        }
        else
        {
            this->temp = temp;
        }
    }
    int getTemp()
    {
        return temp;
    }
    std::string getName()
    {
        return name;
    }
};

int main(void)
{
    Stove stove(50);

    std::cout << stove.getName() << " is set to " << stove.getTemp() << " degrees Celcius\n";
}