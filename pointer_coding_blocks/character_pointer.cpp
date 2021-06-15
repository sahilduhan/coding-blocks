#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    char b[] = "abc";
    cout << a << endl;

    cout << b << endl;
    // due to the cout statement
    char *c = &b[0];
    cout << c << endl;
    char x = 'a';
    char *pointer = &x;
    cout << x << endl;
    cout << pointer << endl; // garbage value in the output is due to the
    // because of the null character which will be achived after some time

    return 0;
}