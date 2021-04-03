#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 56, 7, 7, 35, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    cout << binary_search(arr, size, key);

    return 0;
}