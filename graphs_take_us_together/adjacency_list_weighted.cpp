#include <bits/stdc++.h>
using namespace std;
int main()
{
    int node, edges;
    cin >> node >> edges;
    vector<pair<int, int>> adj[node + 1];
    // a pair is required for
    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v, w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    return 0;
}