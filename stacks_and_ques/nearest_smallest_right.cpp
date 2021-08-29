#include <bits/stdc++.h>
using namespace std;
void nearest_greater_right(int *arr, int size)
{
    stack<int> ans;
    vector<int> final_ans;
    for (int i = size - 1; i >= 0; i--)
    {
        if (ans.size() == 0) final_ans.push_back(-1);
        else if (ans.size() > 0 && ans.top() > arr[i]) final_ans.push_back(ans.top());

        ans.push(arr[i]);
    }
    reverse(final_ans.begin(), final_ans.end());
    for (int i = 0; i < final_ans.size(); i++) cout << final_ans[i] << " ";
}
void near_right(int *arr, int size)
{
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i]) ans.push_back(arr[j]);
            else ans.push_back(-1);
        }
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
}// this is not a good approach O(n^2)
int main()
{
    int arr[] = {4, 1, 0, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    nearest_greater_right(arr, size);
    // near_right(arr, size);
    return 0;
}