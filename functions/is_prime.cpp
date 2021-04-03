#include <bits/stdc++.h>
using namespace std;
bool is_prime(int num)
{
    int ans;
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void all_prime(int num)
{
    for (int i = 2; i < num - 1; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int num;
    cout << " enter the num " << endl;
    cin >> num;
    all_prime(num);
    return 0;
}