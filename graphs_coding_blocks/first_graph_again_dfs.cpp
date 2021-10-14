#include <bits/stdc++.h>
using namespace std;
void print(int **adj_matrix,int v, int sv, bool *visited)
{
    cout<< sv << endl;
    visited[sv] = true;
    for(int i=0;i< v; i++)
    {
        if(sv==i) continue;
        if(visited[sv]) continue;
        if(adj_matrix[sv][i]==1) print(adj_matrix, v, i, visited);
    }
}
int main()
{
    int vertices, edges;
    cin >> vertices >> edges;

    int **adj_matrix = new int *[vertices];
    for (int i = 0; i < vertices; i++)
    {
        adj_matrix[i] = new int [vertices];
        for(int j = 0; j < vertices; j++) adj_matrix[i][j]=0;
    }
    // take inputed matrix

    for(int i=0; i<edges; i++)
    {
        int f, s;
        cin>> f >> s;
        adj_matrix[f][s]=1;
        adj_matrix[s][f]=1;
    }
    
    bool *visited = new bool[edges];

    print(adj_matrix, vertices, 0, visited);

    return 0;
}