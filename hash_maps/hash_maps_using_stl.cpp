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
    return 0;
}