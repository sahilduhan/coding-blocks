#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 4> arr = {1, 2, 3, 4};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr.empty();
    return 0;
}