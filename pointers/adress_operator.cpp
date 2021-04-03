#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 100;
    cout << &x << endl;
    int y = 100;
    cout << &y << endl;
    int *xptr;
    xptr = &x;
    int *yptr;
    yptr = &y;

    cout << &x << endl;
    cout << xptr << endl;

    cout << &y << endl;
    cout << yptr << endl;
    return 0;
}