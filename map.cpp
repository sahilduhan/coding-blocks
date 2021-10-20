#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> b = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 23, 52, 52, 1, 52};
    map<int, int> m;
    for (auto itr : b)
    {
        m[itr]++;
        // auto val = m.find(itr);
        // if(val != m.end()) val->second++;
        // else m.insert(make_pair(itr, 1));
    }

    cout << m.find(52)->first << " -> " << m.find(52)->second << endl;

    return 0;
}