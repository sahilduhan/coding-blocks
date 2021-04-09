#include <bits/stdc++.h>
using namespace std;
void binary_search(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << " yes " << endl;
            break;
        }
        else
        {
            cout << " not " << endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    binary_search(arr, size, key);
    return 0;
}