#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maximum = 0, minmum = INT_MAX;
    vector<int> sahil({12, 2, 323, 32, 525, 245, 3});
    int size = sahil.size();
    for (int i = 0; i < size; i++)
    {
        if (sahil[i] > maximum)
        {
            maximum = sahil[i];
        }
    }
    cout << maximum << endl;
    for (int j = 0; j < size; j++)
    {
        if (sahil[j] < minmum)
        {
            minmum = sahil[j];
        }
    }
    cout << minmum << endl;
    return 0;
}