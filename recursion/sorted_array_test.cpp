#include <bits/stdc++.h>
using namespace std;
bool test_sorted_arr(int *arr, int size)
{

    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] < arr[1] && test_sorted_arr( arr + 1, size - 1))
    {

        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << test_sorted_arr(arr, size)<<endl;

    return 0;
}