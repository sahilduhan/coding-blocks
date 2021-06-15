#include <bits/stdc++.h>
using namespace std;
void print(int *p)
{
    cout << *p << endl;
}
void pass_by_value(int *x)
{
    x = x + 1;
}
void pass_by_reference(int *edn)
{
    (*edn)++;
}
int main()
{
    int p = 10;
    int *xptr = &p;
    print(xptr);
    cout << p << endl;
    pass_by_value(xptr); // the function pass by value will create a copy ans edit it in the
                         // memory and the edit it but the value of main will be printed
                         // therefore there will be no change in tha value of the ans
    cout << *xptr << endl;
    pass_by_reference(xptr);
    cout << *xptr << endl;
    return 0;
}