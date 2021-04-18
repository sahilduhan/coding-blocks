#include <bits/stdc++.h>
using namespace std;
bool isprime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 0; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num = 11;
    isprime(num);
    if (isprime(num))
    {
        cout << " yes " << endl;
    }
    else
    {
        cout << " no " << endl;
    }

    return 0;
}