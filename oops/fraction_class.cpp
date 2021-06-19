#include <bits/stdc++.h>
using namespace std;
class FractionClass
{
public:
    int numerator;
    int denominator;
    FractionClass(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void simplify()
    {
        int gcd = 1;
        int minimum = min(this->numerator, this->denominator);
        for (int i = 0; i < minimum; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }
        }
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }
    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
    void add(FractionClass f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + y * f2.numerator;
        numerator = num;
        denominator = lcm;
        simplify();
    }
};
int main()
{
    FractionClass f1(5, 2);
    FractionClass f2(3, 2);
    f1.add(f2);
    f1.print();
    return 0;
}