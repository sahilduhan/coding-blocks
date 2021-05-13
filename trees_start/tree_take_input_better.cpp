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
    queue<tree_node<int> *> pending_nodes;
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        tree_node<int> *front = pending_nodes.front();
        pending_nodes.pop();
        cout << " enter the children of the node " << front->data << endl;
        int num_child;
        cin >> num_child;
        for (int i = 0; i < num_child; i++)
        {
            int child_data;
            cout << " enter the " << i << " data " << front->data << endl;
            cin >> child_data;
            tree_node<int> *children = new tree_node<int>(child_data);
            front->children.push_back(children);
            pending_nodes.push(children);
        }
    }
    return root;
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
    tree_node<int> *root = take_input_better();
    print_tree(root);
    return 0;
}