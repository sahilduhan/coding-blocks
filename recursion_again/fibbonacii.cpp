#include <bits/stdc++.h>
using namespace std;
int fibbonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num - 1) + (num - 2);
}
int main()
{
    cout << fibbonacci(1) << endl;
    return 0;
}