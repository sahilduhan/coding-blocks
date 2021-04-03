#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maximum_sum = INT_MIN;
    int current_sum = 0;
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        current_sum += arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        cout << max(current_sum, maximum_sum) << " " << endl;
    }

    return 0;
}