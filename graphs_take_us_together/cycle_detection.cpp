#include <bits/stdc++.h>
using namespace std;
bool traversebfs(int sv, int v, vector<int> adj_list, vector<int> &visited){

    queue<pair<int, int>> q;
    visited[sv] = true;
    q.push({sv, -1});
    while (!q.empty()){
        int node = q.front().first;
        int path = q.back().second;
        q.pop();

        for (auto it : adj_list){
            if (!visited[it]){
                visited[it] = true;
                q.push({it, node});
            }
            else if (path != it) return true;
        }
    }
    return false;
}
bool cycleDetection(int v, vector<int> adj_list)
{
    vector<int> visited(v + 1, 0);
    for (int i = 0; i < v; i++){
        if (!visited[i]){
            if (traversebfs(i, v, adj_list, visited)) return true;
        }
    }
    return false;
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