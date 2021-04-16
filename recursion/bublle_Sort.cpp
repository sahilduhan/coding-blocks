#include <bits/stdc++.h>
using namespace std;
int bubble_sort(int *arr, int size)
{
    if (size == 1)
    {
        return 0;
    }
    for (int i = 0; i <= size - 2; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    return bubble_sort(arr, size - 1);
}
int main()
{
    int arr[] = {2, 3, 42, 24, 52};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}