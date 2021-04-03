#include <bits/stdc++.h>
using namespace std;
int power_a_b(int base, int power)
{
    if (power == 1)
    {
        return base;
    }
    if (power == 0)
    {
        return 1;
    }
    return base * (power_a_b(base, power - 1));
}
int main()
{
    int num = 2;
    int pow = 3;
    cout << power_a_b(num, pow) << endl;

    return 0;
}