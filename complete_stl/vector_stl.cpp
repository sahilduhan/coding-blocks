#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    reverse(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    int sum{};
    sum = accumulate(arr.begin(), arr.end(), 0);
    cout << sum << endl;

    return 0;
}