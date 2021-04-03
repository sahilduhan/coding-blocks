#include <bits/stdc++.h>
using namespace std;
int main()
{
    int key = 5;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}