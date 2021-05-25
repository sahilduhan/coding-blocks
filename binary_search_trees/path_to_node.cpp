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
vector<int> *get_node_path(binary_search_tree_node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        vector<int> *output = new vector<int>();
        output->push_back(root->data);
        return output;
    }
    vector<int> *left_output = get_node_path(root->left, data);
    if (left_output != NULL)
    {
        left_output->push_back(root->data);
        return left_output;
    }
    vector<int> *right_output = get_node_path(root->right, data);
    if (right_output != NULL)
    {
        right_output->push_back(root->data);
        return right_output;
    }
    else
        return NULL;
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
    vector<int> *output_path = get_node_path(root, 80);
    for (int i = 0; i < output_path->size(); i++)
    {
        cout << output_path->at(i) << " ";
    }
    return 0;
}