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
void in_order(binary_tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order(root->left);
    cout << root->data <<" ";
    in_order(root->right);
}
int main()
{

    binary_tree_node *root = new binary_tree_node(7);

    //left side of the tree

    root->left = new binary_tree_node(1);
    root->left->left = new binary_tree_node(0);
    root->left->right = new binary_tree_node(3);
    root->left->right->right = new binary_tree_node(5);
    root->left->right->right->right = new binary_tree_node(6);
    root->left->right->right->left = new binary_tree_node(4);
    root->left->right->left = new binary_tree_node(2);
    

    //right side of the tree
    root->right = new binary_tree_node(9);
    root->right->left = new binary_tree_node(8);
    root->right->right = new binary_tree_node(10);
    in_order(root);
    cout<<endl;
    return 0;
}