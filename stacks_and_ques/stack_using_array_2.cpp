#include <bits/stdc++.h>
using namespace std;
class Stack_using_array
{
    int *data;
    int next_index;
    int capacity;

public:
    Stack_using_array()
    {
        data = new int(5);
        next_index = 0;
        capacity = 5;
    }
    int size()
    {
        return next_index;
    }
    bool is_empty()
    {
        return next_index == 0;
    }
    void push(int x)
    {
        if (next_index == capacity)
        {
            int *new_data = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                new_data[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = new_data;
        }

        data[next_index] = x;
        next_index++;
    }
    int pop()
    {
        next_index--;
        return data[next_index];
    }
    int top()
    {
        return data[next_index - 1];
        if (is_empty())
        {
            cout << " stack is empty " << endl;
        }
        return INT_MIN;
    }
};
int main()
{

    return 0;
}