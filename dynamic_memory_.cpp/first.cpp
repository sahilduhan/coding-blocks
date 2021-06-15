#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 100;
    int &j = i;
    i++;
    cout << j << endl;
    j++;
    cout << j << endl;
    return 0;
}