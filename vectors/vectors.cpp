#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> sahil({1, 2, 3, 4, 5});
    cout << sahil.size() << endl;
    sahil.push_back(3);
    sort(sahil.begin(), sahil.end());
    for (int i = 0; i < sahil.size(); i++)
    {
        cout << sahil[i] << endl;
    }

    return 0;
}