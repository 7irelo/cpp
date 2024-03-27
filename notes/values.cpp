#include <iostream>
#include <any>

int& return_value()
{
    static int value = 5;
    return value;
}

void set_value(int &x)
{

}
void print_name(std::string &&name)
{
    std::cout << name << '\n';
}

int main()
{
    return_value() = 4; // return_value return a value by reference i.e a lvalue which can be set to an rvalue, 4 here
    int i = 10; // i is the lvalue, a value with memory, above the function returns a value with memory
    const int &j = 10;
    /*
    - adding const allows you to set the initial value of referential j from an rvalue.
    - the compiler creates a temporary variable (int temp 10)
    - that value is equated j as a reference so no copy of j is created
    // int temp = 10;
    // const int &j = temp;
    */
    // set_value(10); // const literals cant be referenced/aren't lvalues. void set_value(const int &x)
    set_value(i); // i has memory, can be modified, and has an address/is an lvalue

    std::string name = "Eric ";
    std::string surname = "Ncube";
    std::string fullname = name + surname;

    // print_name(fullname);
    print_name(name + surname);
    /*
    - name and surname can't be passed in by reference because they're rvalues (it is part of an expression)
    - this can be fixed by adding const to prefix parameter
    - if you add an rvalue reference (&&) you can pass in rvalue but not lvalues
    */
}