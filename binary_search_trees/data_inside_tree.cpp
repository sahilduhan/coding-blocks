#include <bits/stdc++.h>
using namespace std;
class binary_search_tree_node
{
public:
    int data;
    binary_search_tree_node *left;
    binary_search_tree_node *right;
    binary_search_tree_node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void binary_search_tree(binary_search_tree_node *root, int data)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == data)
    {
        cout << "found" << endl;
    }
    else if (data < root->data)
    {

        return binary_search_tree(root->left, data);
    }
    else
    {

        return binary_search_tree(root->right, data);
    }
}
int main()
{
    binary_search_tree_node *root = new binary_search_tree_node(40);
    //left side of the tree

    root->left = new binary_search_tree_node(20);
    root->left->left = new binary_search_tree_node(10);
    root->left->right = new binary_search_tree_node(30);
    root->left->right->left = new binary_search_tree_node(25);
    root->left->right->right = new binary_search_tree_node(35);

    // right side of the tree

    root->right = new binary_search_tree_node(60);
    root->right->left = new binary_search_tree_node(50);
    root->right->right = new binary_search_tree_node(70);
    root->right->right->right = new binary_search_tree_node(80);
    // root->right->left->right = new binary_search_tree_node(110);
    binary_search_tree(root, 25);
    return 0;
}