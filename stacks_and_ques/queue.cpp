#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Queue_uing_array
{
    T *data;
    int next_index;
    int first_index;
    int size;
    int capacity;

public:
    Queue_uing_array(int s)
    {
        data = new T(s);
        next_index = 0;
        first_index = -1;
        size = 0;
        capacity = s;
    }
    int size()
    {
        return size;
    }
    bool is_empty()
    {
        return size == 0;
    }
    void enqueue(T element)
    {
        if (size == capacity)
        {
            cout << " capacity is full " << endl;
            return;
        }
        data[next_index] = element;
        next_index = (next_index + 1) % capacity;
        if (first_index == -1)
        {
            first_index = 0;
        }
        size++;
    }
};
int main()
{

    return 0;
}