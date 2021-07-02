#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> our_map;
    our_map["shail"] = 1;
    our_map["duhan"] = 2;
    our_map["is"] = 3;
    our_map["a"] = 4;
    our_map["king"] = 5;
    unordered_map<string, int>::iterator it = our_map.begin();
    while (it != our_map.end())
    {
        cout << "value:" << it->first << " and key is: " << it->second << endl;
        it++;
        // amf?
    }
        return 0;
}