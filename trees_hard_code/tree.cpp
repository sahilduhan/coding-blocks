#include <bits/stdc++.h>
using namespace std;

class tree_node
{
public:
    int data;
    vector<tree_node *> children;
    tree_node *new_node(int data)
    {
        tree_node *new_node = new tree_node;
        new_node->data = data;
        return new_node;
    }
};
void print(tree_node *root)
{
    
}

int main()
{
    return 0;
}