// Take N as input, Calculate it's reverse also Print the reverse.
// Input Format:
// Sample Input: 123456789
// Output Format:
// Sample Output: 987654321
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num = 0;
    cout << " enter the num " << endl;
    cin >> num;
    int answer = 0, digit = 0;
    while (num != 0)
    {
        digit = num / 10;
        answer = answer * 10 + digit;
        num / 10;
    }

    cout << answer << endl;
    return 0;
}