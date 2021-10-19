#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool bipartileDfs(int node, vector<int> adj_list, int *color){
    if (color[node] == -1) color[node] = 1;
    for (auto i : adj_list){
        if (color[i] == -1){
            color[i] = 1 - color[node];
            if (!bipartileDfs(i, adj_list, color)) return false;
        }
        else if (color[i] == color[node]) return false;
    }
    return false;
}
bool checkBipartile(vector<int> adj_list, int n){
    int color[n];
    memset(color, -1, sizeof color);
    for (int i = 0; i < n; i++){
        if (color[i] == -1){
            if (!bipartileDfs(i, adj_list, color)) return false;
        }
    }
    return true;
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