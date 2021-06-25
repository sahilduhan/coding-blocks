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
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3, 3, 13, 4, 132, 41, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);
    vector<int> output = remove_duplicates(array, size);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    return 0;
}