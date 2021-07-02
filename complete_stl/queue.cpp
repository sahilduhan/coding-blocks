#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> sahil;
    sahil.push("sahil");
    sahil.push("duhan");
    sahil.push("is");
    sahil.push("legend");

    cout << sahil.front() << endl;
    sahil.pop();
    cout << sahil.front() << endl;
    sahil.pop();
    cout << sahil.front() << endl;
    sahil.pop();
    cout << sahil.front() << endl;
    sahil.pop();
    return 0;
}