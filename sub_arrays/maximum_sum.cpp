#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maximum = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int current_sum = 0;
        for (int j = i; j < size; j++)
        {
            current_sum += arr[j];

            if (current_sum > maximum)
            {
                maximum = current_sum;
            }
        }
    }
    cout << maximum << " " << endl;
    return 0;
}