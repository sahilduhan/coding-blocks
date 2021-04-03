#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int row = 0;
    int col = 0;
    for (row = 2; row >= 0; row--)
    {
        for (col = 2; col >= 0; col--)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}