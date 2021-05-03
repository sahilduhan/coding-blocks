#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout << s1.front() << endl;
    s1.pop();
    cout << s1.front() << endl;
    cout << s1.size() << endl;

    return 0;
}   