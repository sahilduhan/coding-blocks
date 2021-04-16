#include <bits/stdc++.h>
using namespace std;
int binary_search(int *arr, int key, int size, int i)
{
    if (i == size)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return binary_search(arr, key, size, i);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 9;

    return 0;
}