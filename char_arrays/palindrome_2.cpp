#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    int i = 0;
    bool check = 1;
    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << " yes " << endl;
    }
    else
    {
        cout << " not " << endl;
    }

    return 0;
}