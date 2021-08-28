#include <bits/stdc++.h>
using namespace std;
void nearest_greater_right(int *arr, int size)
{
    stack<int> ans;
    vector<int> final_ans;
    for (int i = size - 1; i >= 0; i--)
    {
        if (ans.size() == 0) final_ans.push_back(-1);
        else if (ans.size() > 0 && ans.top()> arr[i]) final_ans.push_back(ans.top());
        ans.push(arr[i]);
    }
    reverse(final_ans.begin(), final_ans.end());
    for (int i = 0; i < final_ans.size(); i++) cout << final_ans[i] << " ";
}
int main()
{
    int arr[] = {};
    int size = sizeof(arr) / sizeof(arr[0]);
    nearest_greater_right(arr, size);
    return 0;
}