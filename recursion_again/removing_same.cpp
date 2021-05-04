#include <bits/stdc++.h>
using namespace std;
void remove_duplicate(char str[])
{
    if (str[0] == '\0')
    {
        return;
    }
    else

        for (int i; i < str[i] != '\0'; i++)
        {
            if (str[i] == str[i + 1])
            {
                str[i] = str[i + 1];
            }
            str[i] = str[i + 1];
        }
    return remove_duplicate(str);
}
int main()
{
    char str[100];
    cout << " enter the string " << endl;
    cin >> str;
    remove_duplicate(str);
    cout << str << endl;
    return 0;
}