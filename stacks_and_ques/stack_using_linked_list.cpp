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
        if (head == NULL)
        {
            return 0;
        }
        T ans = head->data;
        node<T> *temp = head;
        head = head->next_index;
        delete temp;
        size--;
        return ans;
    }
    T top()
    {
        if (head == NULL)
        {
            return 0;
        }

        return head->data;
    }
};

int main()
{
    stack<int> s;
    s.push(100);
    s.push(101);
    s.push(102);
    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout << s.size() << endl;
    cout << s.empty() << endl;

    return 0;
}