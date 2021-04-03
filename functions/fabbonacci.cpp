#include <bits/stdc++.h>
using namespace std;
int fabbonacci(int num)
{
    int a = 0, b = 1, c ;
    for (int i = 1; i < num - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    int num = 5;
    cout << " fibbonaci " << fabbonacci(num);

    return 0;
}