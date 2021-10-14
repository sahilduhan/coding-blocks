#include <bits/stdc++.h>
using namespace std;
void print(int **adj_matrix, int v, int sv, bool *visited)
{
    cout<<sv<<endl;
    visited[sv]= true;
    for(int i=0; i< v; i++){
        if(sv==i) continue;
        if(visited[i]) continue;
        if(adj_matrix[sv][i]==1) print(adj_matrix, v, i, visited);
    }
}
int main()
{
    int v, e;
    cin >> v >> e;

    int **adj_matrix = new int *[v];
    for (int i = 0; i < v; i++)
    {
        adj_matrix[i] = new int[v];
        for (int j = 0; j < v; j++) adj_matrix[i][j] = 0;
    }
    // edges input

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;

        adj_matrix[f][s] = 1;
        adj_matrix[s][f] = 1;
    }
    bool *visited= new bool[v];
    for(int i=0; i<v; i++) visited[i] = false;

    print(adj_matrix, v,0, visited);
    return 0;
}