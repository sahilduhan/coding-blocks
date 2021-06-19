#include <bits/stdc++.h>
using namespace std;
class ComplexNum
{
public:
    int real;
    int imag;
    ComplexNum(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void add(ComplexNum c2)
    {
        int real_part = this->real + c2.real;
        int imag = this->imag + c2.imag;
        this->real = real_part;
        this->imag = imag;
    }
    void print()
    {
        cout << this->real << "+" << this->imag << "i" << endl;
    }
};
int main()
{
    ComplexNum c1(2, 3);
    ComplexNum c2(3, 4);
    c1.print();
    c1.add(c2);
    c1.print();

    return 0;
}