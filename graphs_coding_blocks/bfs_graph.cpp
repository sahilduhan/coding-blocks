#include <bits/stdc++.h>
using namespace std;
void printBfs(int **adj_matrix, int v, int sv)
{
    queue<int> pending_vertices;

    bool *visited = new bool[v];
    for(int i = 0; i < v; i++) visited[i] = false;
    
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
    delete [] visited;
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
   
    bool *visited = new bool[vertices];
    for (int i = 0; i < vertices; i++) visited[i] = false;
    
    printBfs(adj_matrix, vertices, 0);

    delete[] visited;
    for (int i = 0; i < vertices; i++) delete[] adj_matrix[i];
    delete[] adj_matrix;
    return 0;
}