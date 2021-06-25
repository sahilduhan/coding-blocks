#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> sahil;
    sahil.push_back(1);
    sahil.push_back(2);
    sahil.push_back(3);
    sahil.push_back(4);
    sahil.push_back(5);
    sahil.push_back(6);
    sahil.push_back(7);
    sahil.push_back(8);
    vector<int>::iterator it = sahil.begin();
    while (it != sahil.end())
    {
        cout << *it << " ";
        it++;
    }

    return 0;
}