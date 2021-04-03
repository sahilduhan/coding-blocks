#include <bits/stdc++.h>
using namespace std;
void print_strinf(char arr[], int size)
{

    int i = 0;
    char ch = cin.get();
    while (ch != '\n')
    {
        arr[i] = ch;
        i++;
        if (arr[i] == (size - 1))
        {
            break;
        }
        ch = cin.get();
    };
    arr[i] = '\0';
    return;
}
int main()
{
    char arr[1000];
    print_strinf(arr, 1000);
    cout << arr << endl;

    return 0;
}