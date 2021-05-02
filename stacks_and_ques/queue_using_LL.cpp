#include <bits/stdc++.h>
using namespace std;
template <typename T>
class node
{
public:
    T data;
    node<T> *next;
    node(T data)
    {
        this->data = data;
        next = NULL;
    }
};
template <typename T>
class queue_using_ll
{
    node<T> *head;
    node<T> *tail;
    int size;

public:
    queue_using_ll()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    int get_size()
    {
        return size;
    }
    bool is_empty()
    {
        return size == 0;
    }
    void enqueue(T element)
    {
        node<T> *new_node = new node<T>(element);
        if (head == NULL)
        {
            tail->next = new_node;
            tail = new_node;
            size++;
        }
    }
    T front()
    {
        if (is_empty())
        {
            return 0;
        }
        return head->data;
    }
    T dequeue()
    {
        if (is_empty())
        {
            return 0;
        }
        T ans = head->data;
        node<T> *temp = head;
        delete temp;
        size--;
        return ans;
    }
};
int main()
{

    return 0;
}