#include <bits/stdc++.h>
using namespace std;
class tree_node
{
public:
    int data;
    vector<tree_node *> children;
    tree_node(int data)
    {
        this->data = data;
    }
};
int height(tree_node *root)
{
    int ans = 0;
    if (root == NULL)
    {
        return 1;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        
    }
}
int main()
{
    return 0;
}