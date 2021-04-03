#include <bits/stdc++.h>
using namespace std;
int fibbonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    return fibbonacci(num - 1) + fibbonacci(num - 2);
}
int main()
{
    int num = 0;
    cout << " enter the num " << endl;
    cin >> num;
    fibbonacci(num);
    cout << fibbonacci(num) << endl;

    return 0;
}