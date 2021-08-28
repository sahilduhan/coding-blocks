#include <bits/stdc++.h>
using namespace std;
class stack_using_array
{
    int *data;
    int next;
    int capacity;

public:
    stack_using_array(int total_size)
    {
        data = new int[total_size];
        next = 0;
        capacity = total_size;
    }
    int size()
    {
        return next;
    }
    int push(int value)
    {
        if (next == capacity) cout << "Stack is full" << endl;
        else
        {
            data[next] = value;
            next++;
        }
    }
    bool empty()
    {
        return next == 0;
    }
};
int main()
{

    return 0;
}