#include <bits/stdc++.h>
using namespace std;
int main()
{
    int key = 5;
    int arr[] = {};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int current_sum = 0;
        for (int j = i; j < size; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                current_sum += arr[k];
                if (current_sum == key)
                {
                    cout << " found ";
                    break;
                }
            }
        }
    }
    return 0;
}