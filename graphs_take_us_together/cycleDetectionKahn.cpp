#include <bits/stdc++.h>
using namespace std;
bool isCycle(int node, vector<int> adjList){
    queue<int> q;
    vector<int> inDegree(node, 0);
    for(int i=0;i<node;i++){
        for(auto it: adjList) inDegree[it]++;
    }

    for(int i=0;i<node;i++){
        if(inDegree[i]==0) q.push(i);
    }

    int cnt=0;
    while(q.empty()){
        int val= q.front();
        q.pop();
        cnt++;
        for(auto it: adjList){
            inDegree[it]--;
            if(inDegree[it]==0) q.push(it);
        }

    }
    if(cnt==node) return false;
    return true;
}
int main()
{

    return 0;
}