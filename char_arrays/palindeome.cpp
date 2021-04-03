#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(char arr[], int size)
{

    int i = 0;
    int j = strlen(arr) - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[1000];
    cin.getline(arr, 1000, '$');
    if (is_palindrome(arr,1000))
    {
        cout << " is palindrom " << endl;
    }
    else
    {
        cout << " not a palindrome " << endl;
    }

    return 0;
}