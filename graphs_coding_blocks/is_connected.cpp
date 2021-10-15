#include <bits/stdc++.h>
using namespace std;
void traverse(int **adj_matrix, int v, int sv, bool* visited)
{
    visited[sv]= true;
    for(int i=0; i<v; i++)
    {
        if(sv==i) continue;
        if(visited[i]) continue;
        if(adj_matrix[sv][i]==1) traverse(adj_matrix, v, i, visited);
    }
}
void is_connected(int **adj_matrix, int v, int sv, bool *visited)
{
    for(int i=0; i<v; i++) {
        if(visited[i]==false) cout<<"not a connected graph"<<endl;
        else cout<<"connected";
    }
}
int  main()
{
    int vertices, edges;
    cin >> vertices >> edges;

    int **adj_matrix = new int *[vertices];
    for (int i = 0; i < vertices; i++)
    {
        adj_matrix[i] = new int[vertices];
        for (int j = 0; j < vertices; j++) adj_matrix[i][j] = 0;
    }

    for (int i = 0; i < edges; i++)
    {
        int f, s;
        cin >> f >> s;
        adj_matrix[f][s] = 1;
        adj_matrix[s][f] = 1;
    }
    bool *visited = new bool[vertices];
    for (int i = 0; i < vertices; i++) visited[i] = false;
    return 0;
}