#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100] = "sahil duhan is a good boy baby";

    char *ptr = strtok(arr, " ");
    cout << ptr << endl;

    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr<< endl;
    }

    return 0;
}