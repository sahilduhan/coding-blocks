#include <bits/stdc++.h>
using namespace std;
void greater_to_right(int *arr, int size)
{
    stack<int> ans;
    vector<int> final_ans;
    for (int i = size - 1; i >= 0; i--)
    {
        if (ans.size() == 0) final_ans.push_back(-1);
        if (ans.top() > arr[i] && ans.size() > 0) final_ans.push_back(ans.top());
        else if (ans.size() > 0 && ans.top() < arr[i])
        {
            while(ans.size() > 0 && ans.top() <= arr[i]) ans.pop();
            if(ans.size() == 0) final_ans.push_back(-1);
            else final_ans.push_back(ans.top()); 
        }
        ans.push(arr[i]);
    }
}
int main()
{
    int arr[] = {11, 13, 21, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    greater_to_right(arr, size);

    return 0;
}