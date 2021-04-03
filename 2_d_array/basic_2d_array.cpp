#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 5;
    int col = 4;
    int val = 0;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            arr[row][col] = val;
            val = val + 1;
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}