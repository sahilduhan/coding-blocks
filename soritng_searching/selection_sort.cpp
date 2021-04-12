#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2142, 452, 423, 525245, 24531};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, size);
    return 0;
}