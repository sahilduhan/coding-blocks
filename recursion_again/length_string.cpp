#include <bits/stdc++.h>
using namespace std;
int length(char str[])
{
    if (str[0] == '\0')
    {
        return 0;
    }
    int small_ans = length(str + 1);
    return small_ans + 1;
}
int main()
{
    char str[100];
    cout << " enter the string " << endl;
    cin >> str;
    cout << length(str);

    return 0;
}