#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    s1 = " sahil ";
    cout << s1 << endl;
    cout << " enter the value of string " << endl;
    getline(cin, s1);
    cout << s1.length() << endl;
    cout << s1.substr(3, 4) << endl;
    cout << s1.find("ah") << endl;
    return 0;
}