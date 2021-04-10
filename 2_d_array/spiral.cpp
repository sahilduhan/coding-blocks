#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        //spiral
        int row_start = 0, row_end = i - 1, coloum_start = 0, coloum_end = j - 1;
        while (row_start <= row_end && coloum_start <= coloum_end)
        {
        }

        return 0;
    }