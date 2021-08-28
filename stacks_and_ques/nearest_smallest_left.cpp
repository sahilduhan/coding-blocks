#include <bits/stdc++.h>
using namespace std;
void nearest_greater_left(int *arr, int size)
{
    stack<int> ans;
    vector<int> final_ans;
    for (int i = 0; i < size; i++)
    {
        if (ans.size() == 0) final_ans.push_back(-1);
        else if (ans.size() > 0 && ans.top() < arr[i]) final_ans.push_back(ans.top());
        else if (ans.size() > 0 && ans.top() >= arr[i])
        {
            while (ans.size() > 0 && ans.top() < arr[i]) ans.pop();
            if (ans.size() == 0) final_ans.push_back(-1);
            else final_ans.push_back(ans.top());
        }
        ans.push(arr[i]);
    }
    for(int i = 0; i < final_ans.size();i++) cout<<final_ans[i]<<" ";
}
int main()
{
    int arr[] = {4, 5, 2, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    nearest_greater_left(arr, size);
    return 0;
}