#include <bits/stdc++.h>
using namespace std;
void print(int **edges, int vertices, int start_vertex, bool *visited)
{
    cout << start_vertex << endl;
    visited[start_vertex] = true;
    for (int i = 0; i < vertices; i++)
    {
        if (i == start_vertex)
        {
            continue;
        }
        if (edges[i][start_vertex] == 1)
        {
            if (visited[i])
            {
                continue;
            }
            print(edges, vertices, i, visited);
        }
    }
}
int main()
{
    int vertices, e;
    cin >> vertices >> e;
    int **edges = new int *[vertices];
    for (int i = 0; i < vertices; i++)
    {
        edges[i] = new int[vertices];
        for (int j = 0; j < vertices; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    bool *visited = new bool[vertices];
    for (int i = 0; i < vertices; i++)
    {
        visited[i] = false;
    }

    print(edges, vertices, 0, visited);
    return 0;
}