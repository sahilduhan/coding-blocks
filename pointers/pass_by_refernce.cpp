#include <bits/stdc++.h>
using namespace std;
void increment(int *xptr)
{
    *xptr = *xptr + 1;
    cout << *xptr << endl;
}
int main()
{
    int x = 10;
    increment(&x);
    cout<<x<<endl;

    return 0;
}