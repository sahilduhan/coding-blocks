#include <bits/stdc++.h>
using namespace std;
bool string_compare(string arr_1, string arr_2)
{
    if (arr_1.length() < arr_2.length())
    {
        return arr_1 < arr_2;
    }
    return arr_1.length() > arr_2.length();
}
int main()
{

    string arr_1[] = {"sahil", "duhan", "is", "good", "boy"};
    string arr_2[] = {"hello", "baby", "is", "handsome", "h"};
    cout << string_compare(arr_1[5], arr_2[5]);

    return 0;
}