#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> our_map;

    //inserting an element inside an map

    pair<string, int> p("abc", 1);
    our_map.insert(p);

    //different way of adding a value to a map.....

    our_map["cde"] = 2;

    //acess an element corrosponding to any element of

    cout << our_map["cde"] << endl;

    //size of a map

    cout << "size: " << our_map.size() << endl;

    //is present function is not availble then we have to check the count value
    // of the element inserted in the map

    if (our_map.count("cde") > 0)
    {
        cout << "present in the map " << endl;
    }
    our_map.erase("cde");

    if (our_map.count("ce") > 0)
    {
        cout << "present in the map " << endl;
    }

    return 0;
}