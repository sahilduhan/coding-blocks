#include <bits/stdc++.h>
using namespace std;
void print_spiral(int arr[][1000], int m, int n)
{
    int start_row = 0;
    int start_coloum = 0;
    int end_row = m - 1;
    int end_coloum = n - 1;
    
}

int main()
{
    int arr[1000][1000] = {0};
    int m, n;
    cout << " enter the rows and coloum " << endl;
    cin >> m >> n;
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            int var = 0;
            arr[row][col] = var;
            var = var + 11;
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}