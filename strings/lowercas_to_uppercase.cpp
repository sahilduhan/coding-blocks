#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s_1;
    cout << " enter the string 1" << endl;
    getline(cin, s_1);
    int n = s_1.length();
    cout << " the string is :" << (s_1) << endl;

    cout << " the length is :" << n << endl;

    // cout << " the new string is :" << s_1.insert(3, "sahil")
    //      << endl;
    string s_2 = s_1.substr(4, 3);
    cout << s_2 << endl;
    return 0;
}