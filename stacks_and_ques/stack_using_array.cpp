#include <bits/stdc++.h>
using namespace std;
class stack_using_array
{
    int *data;
    int next_index;
    int capacity;

public:
    stack_using_array(int total_size)
    {
        data = new int(total_size);
        next_index = 0;
        total_size = capacity;
    }
    int size()
    {
        return next_index;
    }
    int empty()
    {
        return next_index == 0;
    }
    void push(int element)
    {
        if (next_index == capacity)
        {
            cout << " stack is full" << endl;
        }
        else
        {
            data[next_index] = element;
            next_index++;
        }
    }
    int pop()
    {
        next_index--;
        return data[next_index];
    }
};
int main()
{

    return 0;
}