#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> &visited, vector<int> &adj_list, vector<int> &storedfs)
{
    storedfs.push_back(node);
    visited[node] = 1;
    for(auto i: adj_list) {
        if(!visited[i]) dfs(i, visited, adj_list, storedfs);
    }
}
vector<int> dfsgraphs(int vertices, vector<int> adj_list)
{
    vector<int> storedfs;
    vector<int> visited(vertices + 1, 0);

    for(int i = 0; i < vertices; i++)
    {
        if(!visited[i])
        {   
            dfs(i, visited, adj_list, storedfs);
        }
    }
    return storedfs;
}
int main()
{

    int vertices, edges;
    // node = vertices
    cin >> vertices >> edges;
    vector<int> adj[vertices + 1];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}