#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<int> sahil;
    sahil.insert(1);
    sahil.insert(2);
    sahil.insert(3);
    sahil.insert(4);
    sahil.insert(4);
    sahil.insert(4);
    set<int>::iterator it = sahil.begin();
    it++;
    // in a set all the element are in a sorted order
    // and no element is repeated
    for (auto i : sahil)
    {
        cout << i << endl;
    }
    cout << " iterator " << endl;
    return 0;
}