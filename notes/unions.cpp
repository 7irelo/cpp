#include <iostream>

struct Vector2
{
    int a, b;
};

struct Vector4
{
    /*
    int a, b, c, d;
    Vector2& get_a()
    {
        return *(Vector2*)&a;
    }
    Vector2& get_b()
    {
        return *(Vector2*)&c;
    }
    */
   union
   {
        struct
        {
            int a, b, c, d;
        };
        struct
        {
            Vector2 x, y;
        };
        
   };
};

void print_vector2(Vector2 &vector)
{
    std::cout << vector.a << ", " << vector.b << '\n';
}

int main(void)
{
    Vector2 vect2{ 6, 9 };
    Vector4 vect4 { 3, 1, 7, 5 };
    print_vector2(vect2);
    // print_vector2(vect4.get_a());
    // print_vector2(vect4.get_b());
    print_vector2(vect4.x);
    print_vector2(vect4.y);
}