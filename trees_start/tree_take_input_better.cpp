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
tree_node<int> *take_input_better()
{
    int root_data;
    cout << "enter the data" << endl;
    cin >> root_data;
    tree_node<int> *root = new tree_node<int>(root_data);
}
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
    return 0;
}