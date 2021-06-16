#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    int col;
    cin >> row >> col;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int k = 0; k < row; k++)
    {

        for (int l = 0; l < col; l++)
        {
            cout << arr[k][l] << " ";
        }
        cout << endl;
    }

    return 0;
}