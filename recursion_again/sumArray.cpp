#include <bits/stdc++.h>
using namespace std;
int sumArray(int size, int *arr)
{
    int ans = 0;
    if (size < 0) return 0;
    return sumArray(size - 1, arr) + arr[size];
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int ans = sumArray( size, arr);
    cout<<ans; 
    return 0;
}