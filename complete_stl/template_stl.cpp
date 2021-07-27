#include <bits/stdc++.h>
using namespace std;
template <typename T>
T return_max(T a, T b)
{
    return max(a, b);
}
int main()
{
    int num_1 = 10, num_2 = 100;
    cout << return_max(num_1, num_2);
    return 0;
}