#include <bits/stdc++.h>
using namespace std;
void print_NGE(int *arr, int size)
{
    stack<int> ans;
    vector<int> final_ans;
    for (int i = size; i >= 0; i--)
    {
        ans.push(arr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (arr[i+1]> ans.top()) final_ans.push_back(arr[i+1]);
        else
        {
            ans.pop();
            final_ans.push_back(-1);
        }
    }
    for(int i = 0; i < final_ans.size(); i++) cout << final_ans[i]<<" ";
}
int main()
{
    int arr[] = {11, 13, 21, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_NGE(arr, size);
    return 0;
}