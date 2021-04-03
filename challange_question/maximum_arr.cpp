#include <bits/stdc++.h>
using namespace std;
int maximum_arr(int *arr, int size)
{
    int maximum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
    }
    return maximum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 62, 32, 52, 452, 134};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << " the maximum is " << maximum_arr(arr, size) << " ";
}