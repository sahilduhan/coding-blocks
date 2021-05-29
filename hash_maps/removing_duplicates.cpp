#include <bits/stdc++.h>
using namespace std;
vector<int> remove_duplicates(int *arr, int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(arr[i]) > 0)
        {
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}
int main()
{
    unordered_map<string, int> our_map;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 41, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> output = remove_duplicates(arr, size);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    return 0;
}