// Given a list of numbers stop processing input after the cumulative sum of all the input becomes negative.
// Input Format: A list of integers to be processed
// Sample Input: 1
// 2
// 88
// -100
// 49
// Output Format: Print all the numbers before the cumulative sum become negative.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum = 0;

    while (sum >= 0)
    {
        cout << " enter the num " << endl;
        cin >> num;
        sum += num;
        if (sum < 0)
        {
            break;
        }
    }

    return 0;
}