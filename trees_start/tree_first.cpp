#include <bits/stdc++.h>
using namespace std;
template <typename T>
class tree_node
{
public:
    T data;
    vector<tree_node *> children;
    tree_node(T data)
    {
        this->data = data;
    }
};
void print_tree(tree_node<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print_tree(root->children[i]);
    }
}

int main()
{
    tree_node<int> *root = new tree_node<int>(1);
    tree_node<int> *node_1 = new tree_node<int>(2);
    tree_node<int> *node_2 = new tree_node<int>(3);
    root->children.push_back(node_1);
    root->children.push_back(node_2);
    print_tree(root);
    return 0;
}