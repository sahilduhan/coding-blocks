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
class is_bst_return
{
public:
    int is_bst;
    int minimum;
    int maximum;
};
is_bst_return is_bst(binary_search_tree_node *root)
{
    if (root == NULL)
    {
        is_bst_return output;
        output.is_bst = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
    is_bst_return left_output = is_bst(root->left);
    is_bst_return right_output = is_bst(root->right);
    int minimum = min(root->data, min(left_output.minimum, right_output.minimum));
    int maximum = max(root->data, max(left_output.maximum, right_output.maximum));
    bool is_bst_final = (root->data > left_output.minimum) && (root->data < right_output.minimum) && left_output.is_bst && right_output.is_bst;
    is_bst_return output;
    output.minimum = minimum;
    output.maximum = maximum;
    output.is_bst = is_bst_final;
    return output;
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
    root->right->left->right = new binary_search_tree_node(110);

        return 0;
}