#include <bits/stdc++.h>
using namespace std;
void selection_sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 25, 64, 774, 245};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, size);

    return 0;
}