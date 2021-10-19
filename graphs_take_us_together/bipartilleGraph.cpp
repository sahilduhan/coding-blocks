#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool checkBipartile()
{

    return false;
}
int main()
{
    int n, m;
    cin >> m >> n;
    vector<int> adj_list[n + 1];
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    return 0;
}