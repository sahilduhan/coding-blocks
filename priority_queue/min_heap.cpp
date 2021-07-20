#include <bits/stdc++.h>
using namespace std;
class PriorityQueue
{
public:
    vector<int> arr;
    PriorityQueue()
    {
    }
    bool is_empty()
    {
        return arr.size() == 0;
    }
    int get_size()
    {
        return arr.size();
    }
    int get_min()
    {
        if (is_empty())
        {
            return 0;
        }
        else
            return arr[0];
    }
};
int main()
{

    return 0;
}