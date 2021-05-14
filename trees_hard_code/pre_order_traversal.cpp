#include <bits/stdc++.h>
using namespace std;
class tree_node
{
public:
    int data;
    tree_node *right;
    tree_node *left;
    tree_node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void print_pre_order(tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_pre_order(root->left);
    cout << root->data << " ";
    print_pre_order(root->right);
}

int main()
{
    tree_node *root = new tree_node(1);
    root->left = new tree_node(2);
    root->right = new tree_node(3);
    root->left->left = new tree_node(4);
    root->left->right = new tree_node(5);
    print_pre_order(root);
    return 0;
}