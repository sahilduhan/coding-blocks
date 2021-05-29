#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> our_map;
    our_map["abc"] = 1;
    our_map["abc2"] = 2;
    our_map["abc3"] = 3;
    our_map["abc4"] = 4;
    our_map["abc5"] = 5;
    our_map["abc6"] = 6;
    unordered_map<string, int>::iterator it = our_map.begin();
    while (it != our_map.end())
    {
        cout << "value " << it->first << "\t"
             << " key " << it->second;
        it++;
    }
    vector<int> sahil;
    sahil.push_back(1);
    sahil.push_back(2);
    sahil.push_back(3);
    sahil.push_back(4);
    sahil.push_back(5);
    vector<int>::iterator it1 = sahil.begin();
    while (it1 != sahil.end())
    {
        cout << *it1 << endl;
        it1++;
    }

    return 0;
}
