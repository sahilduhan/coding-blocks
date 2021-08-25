#include <bits/stdc++.h>
using namespace std;
int main()
{
    int edges, vertices;
    cin >> edges >> vertices;
    int adj_matrix[vertices + 1][vertices + 1];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }

    return 0;
}