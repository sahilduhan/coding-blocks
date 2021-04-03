#include <bits/stdc++.h>
using namespace std;
void print_pattern(int num)
{

    for (int i = 1; i <= num; i++)
    {
        char alphabet = 'A';

        for (int j = 1; j <= num - i + 1; j++)
        {

            cout << alphabet;
            alphabet = alphabet + 1;
        }
        cout << endl;
    }
}
int main()
{
    int num;
    cout << " enter the num" << endl;
    cin >> num;

    print_pattern(num);
    return 0;
}