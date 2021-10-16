#include <bits/stdc++.h>
using namespace std;
vector<int> bfsofGraph(int v, vector<int> adj_list[])
{
    vector<int> bfs;
    vector<int> visited(v + 1, 0);
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            queue<int> pending;
            pending.push(i);
            visited[i] = 1;
            while (pending.empty())
            {
                int node = pending.front();
                pending.pop();
                bfs.push_back(node);
                for (auto it : adj_list[node])
                {
                    if (!visited[it])
                    {
                        pending.push(it);
                        visited[it] = 1;
                    }
                }
            }
        }
    }
    return bfs;
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