#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Queue_uing_array
{
    T *data;
    int next_index;
    int first_index;
    int size;

public:
    Queue_uing_array(int s)
    {
        data = new T(s);
        next_index = 0;
        first_index = -1;
        size = 0;
    }
};
int main()
{

    return 0;
}