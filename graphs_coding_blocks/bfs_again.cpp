#include <bits/stdc++.h>
using namespace std;
void print_disconnect_bfs(int **adj_matrix, int v, int sv)
{
    queue<int> pending_vertices;

    bool *visited = new bool[v];
    for (int i = 0; i < v; i++) visited[i] = false;

    pending_vertices.push(sv);

    visited[sv] = true;

    while (!pending_vertices.empty())
    {
        int current_vertices = pending_vertices.front();
        pending_vertices.pop();
        cout << current_vertices << endl;
        for (int i = 0; i < v; i++)
        {
            if (i == current_vertices) continue;
            if (adj_matrix[current_vertices][i] == 1 && !visited[i])
            {
                pending_vertices.push(i);
                visited[i] = true;
            }
        }
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

    bool *visited = new bool[vertices];
    for (int i = 0; i < vertices; i++) visited[i] = false;
    
    return 0;
}
// 8
// 9
// 0 4
// 0 5
// 4 3
// 3 2
// 2 1
// 1 3
// 5 6
// 3 6
// 6 7
