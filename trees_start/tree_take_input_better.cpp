#include <bits/stdc++.h>
using namespace std;
template <typename T>
class tree_node
{
public:
    T data;
    vector<tree_node *> children;
    node(T data)
    {
        this->data = data;
    }
};
tree_node<int> *take_input()
{
    int root_Data = 0;
    cout << " enter the data " << endl;
    tree_node<int> *root = new tree_node<int>(root_Data);
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
        cout << root->children[i]->data << " ";
    }
}
int main()
{

    return 0;
}