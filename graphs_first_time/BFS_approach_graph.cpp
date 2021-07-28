#include <bits/stdc++.h>
using namespace std;
void print_BFS(int **edges, int start)
{
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
    print_BFS( edges, 0);
    return 0;
}