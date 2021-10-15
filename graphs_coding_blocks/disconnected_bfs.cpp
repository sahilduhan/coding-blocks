#include <bits/stdc++.h>
using namespace std;
void print(int **adj_matrix, int v, int sv, bool *visited)
{
    queue<int> pending_vertices;
    
    pending_vertices.push(sv);
    
    visited[sv] = true;
    
    while(!pending_vertices.empty()){
        int current_vertices = pending_vertices.front();
        pending_vertices.pop();
        cout << current_vertices << endl;
        for(int i = 0; i < v; i++){
            if(i==current_vertices) continue;
            if(adj_matrix[current_vertices][i]==1 && !visited[i])
            {
                pending_vertices.push(i);
                visited[i] = true;
            }
        }
    }
}
void printBfs(int **adj_matrix, int v)
{
    bool *visited = new bool[v];
    for(int i = 0; i < v; i++) visited[i] = false;

    for(int i = 0; i < v; i++)
    {
        if(!visited[i]) print(adj_matrix, v, i, visited);
    }
}
int main()
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

    return 0;
}