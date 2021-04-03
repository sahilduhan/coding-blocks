#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 0;
    int col = 0;
    int key = 6;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (arr[row][col] == key)
            {
                cout << " element found at " << row << " " << col << endl;
                break;
            }
            else
            {
                cout << " not found " << endl;
            }
        }
    }

    return 0;
}