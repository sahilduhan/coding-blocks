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
        node *temp = head;
        node *new_node = new node(element);

        if (temp == NULL)
        {
            head = NULL;
        }
        new_node->next_index = temp;
        temp = new_node;
        size++;
    }
    T pop()
    {
        if (is_empty())
        {
            cout << " stack is empty " << endl;
        }
        T ans = head->data;
        size--;

        return ans;
    }
    T top()
    {
        if (head == NULL)
        {
            cout << " stack is empty " << endl;
        }

        return head->data;
    }
};

int main()
{
    

    return 0;
}