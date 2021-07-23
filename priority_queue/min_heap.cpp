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
    void insert(int element)
    {
        arr.push_back(element);
        int child_index = arr.size() - 1;
        while (child_index > 0)
        {
            int parent_index = (child_index - 1) / 2;
            if (arr[child_index] < arr[parent_index])
            {
                int temp = arr[child_index];
                arr[child_index] = arr[parent_index];
                arr[parent_index] = temp;
            }
            child_index = parent_index;
        }
    }
};
int main()
{

    return 0;
}