#include <bits/stdc++.h>
using namespace std;
bool is_sorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    bool is_smaller = is_sorted(arr + 1, size - 1);
    return is_smaller;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    is_sorted(arr, size);
    return 0;
}