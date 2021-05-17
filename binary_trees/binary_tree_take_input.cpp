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
        left = NULL;
        right = NULL;
    }
};
binary_tree_node *take_input()
{
    int root_data;
    cin >> root_data;
    if (root_data == -1)
    {
        return NULL;
    }
    binary_tree_node *root = new binary_tree_node(root_data);
    binary_tree_node *left_child = take_input();
    binary_tree_node *right_child = take_input();
    root->left = left_child;
    root->right = right_child;
    return root;
}
void print_tree(binary_tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print_tree(root->right);
    print_tree(root->left);
}
int main()
{
    binary_tree_node *root = take_input();
    print_tree(root);
    // muje pasand nahi h input dena
    // aur pata h ki mera code sahi likha hua h
    // muje gyaan mat de bhai

    return 0;
}