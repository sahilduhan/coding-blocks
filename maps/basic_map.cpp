#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    // map<int, string>::iterator it;
    m[1] = "sahil";
    m[2] = "bad";
    m[3] = "duhan";

    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // for (auto itr : m) cout << itr.first << " " << itr.second << endl;
    auto it= m.find(3);
    if(it== m.end()) cout<<"No value"<<endl;
    else cout<<it->first<<" "<<it->second<<endl;
    return 0;
}