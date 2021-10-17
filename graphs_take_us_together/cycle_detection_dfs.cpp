#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool cycleedfs(int sv, int parent_index, vector<int> adj_list, vector<int> &visited){
        visited[sv] = 1;
        for (auto it : adj_list){
            if (visited[it]){
                if (cycleedfs(it, sv, adj_list, visited)) return true;
            }
            else if (it != parent_index) return true;
        }
        return false;
    }
    bool cycleDetection(int v, vector<int> adj_list){
        vector<int> visited(v + 1, 0);
        for (int i = 0; i < v; i++){
            if (!visited[i]){
                if (!cycleedfs(i, -1, adj_list, visited)) return true;
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}