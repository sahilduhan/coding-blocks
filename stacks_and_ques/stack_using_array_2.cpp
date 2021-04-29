#include <bits/stdc++.h>
using namespace std;
class Stack_using_array
{
    int *data;
    int Next_Index;
    int capacity;

public:
    Stack_using_array()
    {
        data = new int[5];
        Next_Index = 0;
        capacity = 5;
    }
    int size()
    {
        return Next_Index;
    }
    bool is_empty()
    {
        return Next_Index == 0;
    }
    void push(int x)
    {
        if (Next_Index == capacity)
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

        data[Next_Index] = x;
        Next_Index++;
    }
    int pop()
    {
        Next_Index--;
        return data[Next_Index];
    }
    int top()
    {
        return data[Next_Index - 1];
        if (is_empty())
        {
            cout << " stack is empty " << endl;
        }
        return INT_MIN;
    }
};
int main()
{
    Stack_using_array s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.top();
    s.size();
    return 0;
}