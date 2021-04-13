#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[1000];
    cout << " enter the string " << endl;
    cin.getline(arr, 1000);
    int i = 0;
    int current_len = 0, max_len = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (current_len > max_len)
            {
                max_len = current_len;
            }
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << max_len << " ";

    return 0;
}