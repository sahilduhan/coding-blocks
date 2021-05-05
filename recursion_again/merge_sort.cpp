#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[100];
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[i++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j == e)
    {
        temp[k++] = arr[j++];
    }
    for (int i = s; i < e; i++)
    {
        arr[i] = temp[i];
    }
}
void merge_sort(int *arr, int start, int end)
{
    if (start == end)
    {
        return;
    }
    int mid = (start + end) / 2;
    merge_sort(arr, start, end);
    merge_sort(arr, mid, end);
    merge(arr, start, end);
}
int main()
{
    int arr[] = {1, 3, 352, 12, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}