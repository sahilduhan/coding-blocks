#include <bits/stdc++.h>
using namespace std;
template <typename T>
class node
{
    T data;
    node<T> *next_index;
    node(T data)
    {
        this->data = data;
        next_index = NULL;
    }
};
template <typename T>
class Stack
{
    node<T> *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    T get_size()
    {
        return size;
    }
    bool is_empty()
    {
        return size == 0;
    }

    void push(T element)
    {
        node *temp;
        node *new_node = new node(element);

        if (temp == NULL)
        {
            head = NULL;
        }
        new_node->next_index = head;

        size++;
    }
    T pop()
    {
    }
    T top()
    {
        return
    }
};

int main()
{

    return 0;
}