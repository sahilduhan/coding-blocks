#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> our_map;
    our_map["sahil_1"] = 1;
    our_map["sahil_2"] = 2;
    our_map["sahil_3"] = 3;
    our_map["sahil_4"] = 4;
    our_map["sahil_5"] = 5;
    unordered_map<string, int>::iterator it1 = our_map.find("sahil");
    vector<int> sahil;
    sahil.push_back(1);
    sahil.push_back(2);
    sahil.push_back(3);
    sahil.push_back(4);
    sahil.push_back(5);
    vector<int>::iterator it2 = sahil.begin();
    while (it2 != sahil.end())
    {
        cout << *it2 << " ";
        it2++;
    }

    return 0;
}