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

        node<T> *new_node = new node<T>(element);
        new_node->next_index = head;
        head = new_node;
        size++;
    }
    T pop()
    {
        T ans = head->data;
        node<T> *temp = head;
        head = head->next_index;
        delete head;
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