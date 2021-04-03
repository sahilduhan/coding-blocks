#include <bits/stdc++.h>
using namespace std;
int tiling(int num)
{
    if (num == 1)
    {
        return 1;
    }
    int f1 = num - 1;
    int f2 = num - 4;
    return f1 + f2;
}
int main()
{
    int num = 10;
    cout << tiling(num) << " ";

    return 0;
}