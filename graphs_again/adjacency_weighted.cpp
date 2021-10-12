#include <bits/stdc++.h>
using namespace std;
int main()
{
    //n= nodes, m= edges
    
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj_list[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj_list[u].push_back({v, wt});
        adj_list[v].push_back({u, wt});
    }

    return 0;
}