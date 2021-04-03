#include <bits/stdc++.h>
using namespace std;
void print_spellings(int num)
{
    string words[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    if (num == 0)
    {
        return;
    }
    print_spellings(num / 10);
    int digit = num % 10;
    cout << words[digit] << " ";
    return;
}
int main()
{
    int num = 2048;
    print_spellings(num);

    return 0;
}