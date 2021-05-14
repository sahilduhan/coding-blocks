#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int value;
    vector<TreeNode *> children;
  

    void print()
    {
        cout << "value of node is - " << value << endl;
        if (!children.size())
            cout << "No children " << endl;
        for (auto a : children)
            cout << a->value << " ";
        cout << endl;
    }
};

int main()
{
    TreeNode sachin(3);
    sachin.print();
    return 0;
}