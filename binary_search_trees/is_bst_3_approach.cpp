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
        right = NULL;
        left = NULL;
    }
};
bool is_bst_better(binary_search_tree_node *root, int min = INT_MIN, int max = INT_MAX)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data > max || root->data < min)
    {
        return false;
    }
    bool is_left_ok = is_bst_better(root->left, min, root->data - 1);
    bool is_right_ok = is_bst_better(root->right, root->data, max);
    return is_left_ok && is_right_ok;
}
int main()
{

    binary_search_tree_node *root = new binary_search_tree_node(4);
    //left side of the tree

    root->left = new binary_search_tree_node(2);
    root->left->left = new binary_search_tree_node(1);
    root->left->right = new binary_search_tree_node(3);
    // root->left->right->left = new binary_search_tree_node(25);
    // root->left->right->right = new binary_search_tree_node(35);

    // right side of the tree

    root->right = new binary_search_tree_node(6);
    root->right->left = new binary_search_tree_node(5);
    root->right->right = new binary_search_tree_node(7);
    // root->right->right->right = new binary_search_tree_node(80);
    // root->right->left->right = new binary_search_tree_node(110);

    cout << is_bst_better(root) << endl;

    return 0;
}