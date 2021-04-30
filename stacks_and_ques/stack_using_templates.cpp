#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Stack_using_array
{
    int *data;
    int next_index;
    int capacity;

public:
    Stack_using_array()
    {
        data = new T(4);
        next_index = 0;
        capacity = 4;
    }
    int size()
    {
        return next_index;
    }
    bool is_empty()
    {
        return next_index == 0;
    }
    void push(T elemnet)
    {
        if (next_index == capacity)
        {
            T *new_data = new data[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                new_data[i] = data[i];
            }
            capacity *= 2;
            delete data;
            data = new_data;
        }
        data[next_index] = elemnet;
        next_index++;
    }
    T pop()
    {
        if (is_empty())
        {
            cout << " stack is empty " << endl;
            return 0;
        }
        next_index--;
        return data[next_index];
    }
    T top()
    {
        if (is_empty())
        {
            cout << " stack is empty " << endl;
            return 0;
        }
        return data[next_index - 1];
    }
};
int main()
{
    Stack_using_array<int> s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << " ";

    return 0;
}