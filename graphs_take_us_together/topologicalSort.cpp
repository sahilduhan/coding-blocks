#include <bits/stdc++.h>
using namespace std;
void findTopoSort(int node, vector<int> adjList, stack<int> &s, vector<int> &visited)
{
    visited[node]=1;
    for(auto it: adjList){
        if(!visited[node]) findTopoSort(it, adjList, s, visited);
    }
    s.push(node);
}
vector<int> topoSort(int node, vector<int> adjList)
{
    vector<int> visited(node, 0);
    stack<int> s;
    for (int i = 0; i < node; i++)
    {
        if(visited[node]==0) findTopoSort(i, adjList, s, visited); 
    }
    vector<int> topo;
    while (!s.empty())
    {
        topo.push_back(s.top());
        s.pop();
    }
    return topo;   
}
int main()
{

    return 0;
}