#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums({-9, -2, 0, 2, 4});
    for (int i = 0; i < nums.size(); i++)
    {
        nums.push_back(i * i);
    }
    sort(nums.begin(), nums.end());
    for (int j = 0; j < nums.size(); j++)
    {
        cout << nums[j] << " ";
    }
    return 0;
}