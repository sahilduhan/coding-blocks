#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "sahilduhan";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str << " " << endl;

    for (int j = 0; j < str.size(); j++)
    {
        if (str[j] >= 'A' && str[j] <= 'Z')
        {
            str[j] = str[j] + 32;
        }
    }
    cout << str << " " << endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << " ";
    return 0;
}