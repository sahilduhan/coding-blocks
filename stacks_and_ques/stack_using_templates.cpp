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
    
};
int main()
{

    return 0;
}