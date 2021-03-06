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
        left = NULL;
        right = NULL;
    }
};
int maximum(binary_search_tree_node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    return max(root->data, max(maximum(root->right), maximum(root->left)));
}
int minimum(binary_search_tree_node *root)
{
    if (root == NULL)
    {
        return INT_MAX;
    }
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}
bool is_Bst(binary_search_tree_node *root)
{
    if (root == NULL)
    {
        return true;
    }
    int left_max = maximum(root->left);
    int right_min = minimum(root->right);
    bool output = (root->data > maximum(root->left)) && (root->data <= minimum(root->right)) && is_Bst(root->left) && is_Bst(root->right);
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
    // root->right->left->right = new binary_search_tree_node(110);
    cout << minimum(root) << endl;
    cout << maximum(root) << endl;
    cout << is_Bst(root) << endl;

    return 0;
}