#include <bits/stdc++.h>
using namespace std;
int find_zeros(int n)
{
    int ans = 0;
    for (int d = 5; n / d >= 1; d = d * 5)
    {
        ans += n / d;
    }
    return ans;
}
int main()
{
    long long int num;
    cout << " enter the num " << endl;
    cin >> num;
    cout << find_zeros(num) << endl;

    return 0;
}