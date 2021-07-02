#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> sahil;
    sahil.push(1);
    sahil.push(2);
    sahil.push(3);
    sahil.push(4);
    cout << sahil.size() << endl;
    cout << sahil.top() << endl;
    stack<string> duhan;
    duhan.push("duhan");
    duhan.push("sahil");
    duhan.push("god");
    cout << duhan.top() << endl;
    duhan.pop();
    cout << duhan.top() << endl;
    duhan.pop();
    cout << duhan.top() << endl;
    return 0;
}