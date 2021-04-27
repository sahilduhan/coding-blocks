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
            return;
        }
        data[next_index] = element;
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
        if (empty())
        {
            cout << " stack is empty " << endl;
        }
        return INT_MIN;
    }
};
int main()
{
    stack_using_array s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.size();
    s.empty();
    s.top();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}