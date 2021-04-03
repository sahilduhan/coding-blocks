#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            cout << " the array is strictly inc " << endl;
        }
        else
        {
            cout << " the array is not strictly inc" << endl;
        }
    }
    return 0;
}