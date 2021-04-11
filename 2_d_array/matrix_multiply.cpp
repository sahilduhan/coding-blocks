#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p = 3, q = 3, r = 3, s = 3;
    int arr_1[p][q] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int arr_2[r][s] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    if (q == r)
    {
        int result[p][s] = {0};
        int sum = 0;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < s; j++)
            {
                for (int k = 0; k < r; i++)
                {
                    sum += arr_1[i][k] * arr_2[k][j];
                }
                cout << sum << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << " not possible" << endl;
    }
    return 0;
}