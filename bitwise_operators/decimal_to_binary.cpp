#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num = 142;
    vector<long long int> bit_vector;
    while (num > 0)
    {
        bit_vector.push_back(num % 2);
        num = num / 2;
    }
    for (int i = bit_vector.size() - 1; i > 0; i--)
    {
        cout << bit_vector.at(i);
    }

    return 0;
}