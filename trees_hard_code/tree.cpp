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
void print(tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
}
int main()
{
    tree_node *root = new tree_node(1);
    tree_node *node_1 = new tree_node(2);
    tree_node *node_2 = new tree_node(3);
    tree_node *node_3 = new tree_node(4);
    root->children.push_back(node_1);
    root->children.push_back(node_2);
    root->children.push_back(node_3);
    print(root);
    return 0;
}