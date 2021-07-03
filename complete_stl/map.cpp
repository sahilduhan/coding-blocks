#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> s;
    s.insert({"sahil", 1});
    s.insert({"duhan", 2});
    s.insert({"is", 3});
    s.insert({"king", 4});
    for (auto i : s)
    {
        cout << i.second << " " << i.first << endl;
    }
    return 0;
}