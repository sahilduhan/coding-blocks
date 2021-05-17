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
        left = right = NULL;
    }
};
void print_tree_data(binary_tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print_tree_data(root->right);
    print_tree_data(root->left);
}
int count_tree_node(binary_tree_node *root)
{
    int ans = 0;
    if (root == NULL)
    {
        return 0;
    }
    ans += count_tree_node(root->right);
    ans += count_tree_node(root->left);
    return ans;
}
int main()
{
    

    return 0;
}