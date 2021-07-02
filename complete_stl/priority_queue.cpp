#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> sahil;
    sahil.push(1);
    sahil.push(13);
    sahil.push(12);
    sahil.push(14);
    cout << sahil.size() << endl;
    int n = sahil.size();
    // size of the priority_queue is changing after every pop
    for (int i = 0; i < n; i++)
    {
        cout << sahil.top() << endl;
        sahil.pop();
    }
    cout << sahil.size() << endl;
    return 0;
}