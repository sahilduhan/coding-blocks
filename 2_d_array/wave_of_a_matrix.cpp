#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 4;
    int n = 4;
    int arr[m][n] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};

    for (int col = 0; col < n; col++)
    {

        if (col % 2 == 0)
        {
            for (int row = 0; row < m; row++)

                cout << arr[row][col] << " ";
        }
        else
        {
            for (int row = m; row >= 0; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
    return 0;
}