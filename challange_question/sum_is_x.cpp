#include <bits/stdc++.h>
using namespace std;
void sum_is_k(int *arr, int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        int initail_sum = 0;
        for (int j = i; j < size; j++)
        {
            initail_sum += arr[j];

            cout << initail_sum << " ";
            // if (initail_sum == key)
            // {
            //     cout << arr[j] << " ";
            // }
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sum_is_k(arr, size, 3);
    return 0;
}