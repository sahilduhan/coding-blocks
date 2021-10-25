#include <bits/stdc++.h>
using namespace std;
bool checkCylcle(int node, vector<int> adjList, int *visited, int *dfsVisited)
{
    visited[node] = 1;
    dfsVisited[node] = 1;
    for(auto i: adjList){
        if(!visited[i])
        {
            if(checkCylcle(i, adjList, visited, dfsVisited)) return true;
        }
        else if(dfsVisited[i]) return true; 
    }
    return false;
}

bool isCycle(int node, vector<int> adjList)
{
    int visited[node], dfsVisied[node];
    memset(visited, 0, sizeof visited);
    memset(dfsVisied, 0, sizeof dfsVisied);
    for(int i=0; i<node; i++){
        if(checkCylcle(i, adjList, visited, dfsVisied)) return true;
    }
    return false;
}
int main()
{

    return 0;
}