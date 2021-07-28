#include <bits/stdc++.h>
using namespace std;

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
        edges[f][s] = 0;
        edges[s][f] = 0;
    }
    return 0;
}