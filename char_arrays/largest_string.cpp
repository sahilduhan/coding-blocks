#include <bits/stdc++.h>
using namespace std;
int main()
{

    char arr[1000];
    char largest[1000];
    int num = 0;
    int len = 0;
    int largest_len = 0;
    cout << " enter the num " << endl;
    cin >> num;
    cout << " enter the string " << endl;
    cin.get();
    for (int i = 0; i < num; i++)

    {
        cin.getline(arr, num);
        len = strlen(arr);
        if (len > largest_len)
        {
            largest_len = len;
            strcpy(largest, arr);
        }
    }
    cout << largest << " is " << largest_len << endl;

    return 0;
}