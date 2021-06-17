#include <bits/stdc++.h>
using namespace std;
int sum(int *arr, int size, int val = 0)
{
    int sum = 0;
    for (int i = val; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int val = 5;
    int ans = sum(arr, size, val);
    cout << ans << endl;
    return 0;
}