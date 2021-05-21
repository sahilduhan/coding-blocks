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
binary_search_tree_node *tree_from_array(int *arr, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int middle = (start + end) / 2;
    binary_search_tree_node *root = new binary_search_tree_node(arr[middle]);
    root->left = tree_from_array(arr, start, middle - 1);
    root->right = tree_from_array(arr, middle + 1, end);
    return root;
}
void pre_order(binary_search_tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    pre_order(root->left);
    cout << root->data << " ";
    pre_order(root->right);
}
int main()
{
    binary_search_tree_node *root;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    return 0;
}