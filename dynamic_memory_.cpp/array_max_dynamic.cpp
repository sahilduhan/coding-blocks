#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << " enter the size:" << endl;
    cin >> num;
    int *arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        cout << " enter the " << i << " element" << endl;
        cin >> arr[i];
    }
    int max = INT_MIN;
    for (int j = 0; j < num; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    cout << " the maximum is " << max << endl;
    delete[] arr;
    return 0;
}