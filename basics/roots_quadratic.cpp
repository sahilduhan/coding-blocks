// Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots. <br>
// If Real and Distinct , print the roots in increasing order. <br>
// If Real and Equal , print the same repeating root twice <br>
// If Imaginary , no need to print the roots.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, x1, x2, d;
    cout << " enter the value of a " << endl;
    cin >> a;
    cout << " enter the value of b " << endl;
    cin >> b;
    cout << " enter the value of c " << endl;
    cin >> c;
    cout << " the quadratic equation is " << a << "X^2+" << b << " x+" << c << endl;
    d = (b * b) - (4 * a * c);
    if (d >= 0)
    {
        x1 = (-b) + sqrt(d) / (2 * a);
        x2 = (-b) - sqrt(d) / (2 * a);
        cout << " the roots are " << max(x1, x2) << min(x1, x2) << endl;
    }

    else
    {
        cout << " enter another equation " << endl;
    }

    return 0;
}