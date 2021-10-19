#include <asm-generic/errno.h>
#include <bits/stdc++.h>
using namespace std;
bool bipartileDfs(int node, vector<int> adj_list, int *color){
    queue<int> q;
    q.push(node);
    color[node] = 1;
    while (!q.empty()){
        int front = q.front();
        q.pop();
        for (auto i : adj_list){
            if (color[i] == -1)
            {
                color[i] = 1 - color[front];
                q.push(i);
            }
            else if (color[i] == color[front]) return false;
        }
    }
    return true;
}

bool isbipartile(vector<int> adj_list, int n){
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
    cin >> n >> m;
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