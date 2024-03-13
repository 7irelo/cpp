#include <iostream>

typedef struct node
{
    int num;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{

    node *list = nullptr;
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        node *n = new node;
        if (n == nullptr)
        {
            return 1;
        }
        n->num = number;
        n->next = nullptr;

        n->next = list;
        list = n;
    }
    node *ptr = list;
    while (ptr != nullptr)
    {
        std::cout << ptr->num << ' ';
        ptr = ptr->next;
    }
    ptr = list;
    while (ptr != nullptr)
    {
        node *next = ptr->next;
        delete ptr;
        ptr = next;
    }
    return 0;
}