#include <bits/stdc++.h>
using namespace std;
class binary_tree_node
{
public:
    int data;
    binary_tree_node *left;
    binary_tree_node *right;
    binary_tree_node(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};
int height_tree(binary_tree_node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(height_tree(root->left), height_tree(root->right));
}
pair<int, int> height_daimeters(binary_tree_node *root)
{
    if (root == NULL)
    {
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
    }
    pair<int, int> left_ans = height_daimeters(root->left);
    pair<int, int> right_ans = height_daimeters(root->right);
    int l_dia = left_ans.second;
    int l_height = left_ans.first;
    int r_dia = right_ans.second;
    int r_height = right_ans.first;

    int height = 1 + max(l_height, r_height);
    int diameter = max(l_height + r_height, max(l_dia, r_dia));
    pair<int, int> p;
    p.first = height;
    p.second = diameter;
    return p;
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
    cout << height_daimeters << " ";
    return 0;
}