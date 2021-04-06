#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, h = 0;
    cout << " enter the value of base, b" << endl;
    cin >> b;
    cout << " enter the value of height, a" << endl;
    cin >> a;
    cout << " enter the value of hypotonuse, h" << endl;
    cin >> h;
    if ((a * a) + (b * b) == (h * h))
    {
        cout << " yes " << endl;
    }
    else
    {
        cout << " not " << endl;
    }

    return 0;
}