#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    // m[1] = "abc";
    // m[2] = "def";
    // m[3] = "abc";
    // m[4] = "gfj";
    // m[5] = "jkl";
    // m[6] = "ghj";
    // m[7] = "ghj";
    // m[8] = "abc";
    int n = 8;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}