#include <bits/stdc++.h>
using namespace std;
class binary_tree_node
{
public:
    int data;
    binary_tree_node *right;
    binary_tree_node *left;
    binary_tree_node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void pre_order_pritnig(binary_tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    pre_order_pritnig(root->left);
    pre_order_pritnig(root->right);
}
int main()
{
    binary_tree_node *root = new binary_tree_node(10);

    //left side of the tree

    root->left = new binary_tree_node(1);
    root->right = new binary_tree_node(2);
    root->left->left = new binary_tree_node(3);
    root->left->right = new binary_tree_node(4);
    root->left->left->right = new binary_tree_node(7);
    root->left->left->right->right = new binary_tree_node(13);
    root->left->right->left = new binary_tree_node(8);

    //right side of the tree

    root->right->left = new binary_tree_node(5);
    root->right->right = new binary_tree_node(6);
    root->right->right->left = new binary_tree_node(11);
    root->right->right->right = new binary_tree_node(12);
    pre_order_pritnig(root);
    return 0;
}