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
    int remove_min()
    {
        if (is_empty())
        {
            return 0;
        }
        int ans = arr[0];
        arr[0] = arr[arr.size() - 1];
        arr.pop_back();
        int parent_index = 0;
        int left_child = 2 * parent_index + 1;
        int right_child = 2 * parent_index + 2;
        // while ()
        {
            int min_index = parent_index;
            if (arr[min_index] > arr[left_child])
            {
                min_index = left_child;
            }
            if (arr[right_child] < arr[min_index])
            {
                min_index = right_child;
            }
            int temp = arr[min_index];
            arr[min_index] = arr[parent_index];
            arr[parent_index] = temp;
            parent_index = min_index;
            int left_child = 2 * parent_index + 1;
            int right_child = 2 * parent_index + 2;
        }

        return ans;
    }
};
int main()
{

    return 0;
}