#include <bits/stdc++.h>
using namespace std;
int gcd(int num_1, int num_2)
{
    if (num_2 == 0)
    {
        return num_1;
    }
    return gcd(num_2, num_1 % num_2);
}
int lcm(int num_1, int num_2)
{
    return (num_1 * num_2) / gcd(num_1, num_2);
}
int main()
{
    cout << gcd(10, 15) << endl;
    cout << lcm(10, 15) << endl;

    return 0;
}