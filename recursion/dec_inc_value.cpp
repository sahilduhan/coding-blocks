#include <bits/stdc++.h>
using namespace std;
void dec(int num)
{
    if (num == 0)
    {
        return;
    }
    cout << num << " ";
    dec(num - 1);
}
void inc_val(int num)
{
    if (num == 0)
    {
        return;
    }
    inc_val(num - 1);
    cout << num << " ";
}
int main()
{
    int num = 10;
    dec(num);
    inc_val(num);

    return 0;
}