#include <bits/stdc++.h>
using namespace std;
class Binary_tree_node
{
public:
    int data;
    Binary_tree_node *right;
    Binary_tree_node *left;
    Binary_tree_node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void print_data(Binary_tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
}
int main()
{

    Binary_tree_node *root = new Binary_tree_node(10);

    //left side of the tree

    root->left = new Binary_tree_node(1);
    root->right = new Binary_tree_node(2);
    root->left->left = new Binary_tree_node(3);
    root->left->right = new Binary_tree_node(4);
    root->left->left->right = new Binary_tree_node(7);
    root->left->left->right->right = new Binary_tree_node(13);
    root->left->right->left = new Binary_tree_node(8);

    //right side of the tree

    root->right->left = new Binary_tree_node(5);
    root->right->right = new Binary_tree_node(6);
    root->right->right->left = new Binary_tree_node(11);
    root->right->right->right = new Binary_tree_node(12);

    print_data(root);

    return 0;
}