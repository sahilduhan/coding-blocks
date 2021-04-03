#include <bits/stdc++.h>
using namespace std;
int linear_search(int *arr, int key, int size, int i)
{
    if (i == size)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    linear_search(arr, key, size, i + 1);
    // return;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 7};
    int key = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << linear_search(arr, key, size, 0) << " ";

    return 0;
}