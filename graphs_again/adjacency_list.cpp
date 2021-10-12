#include <bits/stdc++.h>
using namespace std;
int main()
{
    //n= nodes, m= edges

    int n, m;
    cin >> n >> m;
    vector<int> adj_list[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

        // for an one side directional graph, the 14 line is useless
    }
    return 0;
}