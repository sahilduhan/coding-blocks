#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *xptr = &x;
    cout << &x << endl;
    cout << xptr << endl;
    cout << *(&x) << endl;
    cout << *(xptr) << endl;
    cout << *(&xptr) << endl;
    cout << *(xptr + 1) << endl;
    cout << *(xptr) + 1 << endl;
    int **xxptr = &xptr;
    cout << xxptr << endl;

    return 0;
}