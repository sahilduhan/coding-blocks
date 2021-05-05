#include <bits/stdc++.h>
using namespace std;
int substr(string input, string output[])
{
    if (input.empty())
    {
        output[0] = "";
        return 1;
    }
    string small_string = input.substr(1);
    int small_output = substr(small_string, output);
    for (int i = 0; i < small_output; i++)
    {
        output[i + 1] = input[0] + output[i];
    }
    return 2 * small_output;
}
int main()
{
    string input;
    cout << " enter the value of the string " << endl;
    getline(cin, input);
    int length = input.length();
    string *output = new string[pow(2, input.length())];
    int count = substr(input, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}