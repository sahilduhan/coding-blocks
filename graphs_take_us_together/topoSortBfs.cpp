#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int node, vector<int> adjList)
{
    queue<int> q;
    vector<int> inDegree(node, 0);
    for (int i = 0; i < node; i++){
        for (auto it : adjList) inDegree[it]++;
    }

    for(int i=0;i<node; i++){
        if(inDegree[i]==0) q.push(i);
    }

    vector<int> topo;
    while (q.empty())
    {
        int val= q.front();
        q.pop();
        topo.push_back(val);
        for(auto it: adjList){
            inDegree[it]--;
            if(inDegree[it]==0) q.push(it);
        }
    }
    return topo;
}
int main()
{

    return 0;
}