#include <bits/stdc++.h>
using namespace std;
void increment(int a)
{
    a = a + 1;
    cout << " inside function is " << a << endl;
}
int man()
{
    int a = 10;
    increment(a);
    cout<<" inside main "<<a<<endl;

    return 0;
}