#include <bits/stdc++.h>
using namespace std;
int main()
{
    int curent_sum;
    int maximum_sum = 0;
    int left = -1;
    int right = -1;

    int arr[] = {-4, 1, 3, -2, 6, 2, -8, -9, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            curent_sum = 0;
            for (int k = i; k < j; k++)
            {
                curent_sum += arr[k];
            }
            if (curent_sum > maximum_sum)
            {
                maximum_sum = curent_sum;
            }
            left = i;
            right = j;
        }
    }
    cout << maximum_sum << endl;
    return 0;
}