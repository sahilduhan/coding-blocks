#include <bits/stdc++.h>
using namespace std;
void removingElement(char str[])
{
    if (str[0] == '\0')
    {
        return;
    }
    if (str[0] != 'x')
    {
        removingElement(str + 1);
    }
    else
    {
        int i = 1;
        for (; i < str[i] != '\0'; i++)
        {
            str[i - 1] = str[i];
        }
        str[i - 1] = str[i];
        removingElement(str);
    }
}
int main()
{
    char str[100];
    cout << " enter the string " << endl;
    cin >> str;
    removingElement(str);
    cout << str << endl;

    return 0;
}