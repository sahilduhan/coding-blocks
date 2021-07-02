#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> sahil;
    sahil.push_back(1);
    sahil.push_front(2);
    for (int i : sahil)
    {
        cout << i << endl;
    }
    sahil.pop_back();
    for (int j : sahil)
    {
        cout << j << endl;
    }
    cout << sahil.size() << endl;
    cout << sahil.empty() << endl;
    cout<<sahil.at(0) << endl;
    return 0;
}