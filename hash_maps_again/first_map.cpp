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
    cout << our_map["king"] << endl;
    cout << our_map.at("is") << endl;

    // this map will insert the value

    cout << our_map["king"] << endl;

    // this can be easily used to to test weather a given value is present

    if (our_map.count("king") > 0)
    {
        cout << "the val is already present" << endl;
    }

    // erase function is also present in the hash map STL

    our_map.erase("king");

    // the out put will present a 0 at the value of the nunber where the
    // value was inserted

    if (our_map.count("king") > 0)
    {
        cout << "the val is already present" << endl;
    }
    cout<<our_map.size();
    return 0;
}