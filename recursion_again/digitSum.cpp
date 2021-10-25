#include <bits/stdc++.h>
using namespace std;
int digitSum(int num)
{
    if (num == 0) return 0;
    return digitSum(num / 10) + (num % 10);
}
int main()
{
    int n=1212;
    cout<<digitSum(n);
    return 0;
}