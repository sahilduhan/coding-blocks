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
        cout << " yes the num is prime " << endl;
    }
    else
    {
        cout << " the num is not prime" << endl;
    }

    return 0;
}