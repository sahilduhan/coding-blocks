#include <bits/stdc++.h>
using namespace std;
int main()
{

    string arr[5];
    for (int i = 0; i < 5; i++)
    {
        getline(cin, arr[i]);
    }

    sort(arr, arr + 5);

    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}