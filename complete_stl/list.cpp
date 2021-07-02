#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> sahil;
    sahil.push_back(1);
    sahil.push_back(2);
    sahil.push_front(3);
    list<int> duhan(sahil);
    for (int i : sahil)
    {
        cout << i << endl;
    }
    cout << sahil.size() << endl;
    sahil.erase(sahil.begin(), sahil.end());
    cout << sahil.size() << endl;
    for (int j : duhan)
    {
        cout << j << endl;
    }
    return 0;
}