#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1;
    s1.push(100);
    s1.push(200);
    s1.push(300);
    s1.push(400);
    s1.push(500);
    s1.push(600);
    s1.push(700);

    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    cout << s1.empty() << endl;

    return 0;
}