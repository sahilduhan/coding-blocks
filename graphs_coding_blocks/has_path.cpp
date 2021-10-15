#include <bits/stdc++.h>
using namespace std;
bool has_path(int **adj_matrix, int v, int sv, int target)
{
    bool *visited = new bool[v];
    for(int i = 0; i < v; i++) visited[i] = false;
    visited[sv] = true;
    for(int i = 0; i < v; i++){
        if(i==target) return true;
        if(visited[i]) continue;
        if(sv==i) continue;
        if(adj_matrix[sv][i]==1) has_path(adj_matrix, v, i, target);
    }
    return false;
}
int main()
{
    int vertices, edges;
    cin>>vertices >> edges;

    int **adj_matrix = new int *[vertices];

    for(int i=0; i<vertices; i++)
    {
        adj_matrix[i] = new int[vertices];
        for(int j=0; j<vertices; j++) adj_matrix[i][j] = 0;
    }

    for(int i=0; i<edges; i++)
    {
        int f, s;
        cin>>f >> s;
        adj_matrix[f][s]=1;
        adj_matrix[s][f]=1;
    }



    return 0;
}