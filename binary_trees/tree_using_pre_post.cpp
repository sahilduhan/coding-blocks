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
        right = NULL;
        left = NULL;
    }
};
binary_tree_node *build_tree_help(int in_order, int pre, int in_start, int in_exit, int pre_start, int pre_end)
{
}
binary_tree_node *build_tree(int in_order, int pre_order, int size, int)
{
    return build_tree_help(in_order, pre_order, 0, size - 1, 0, size - 1);
}

int main()
{
    return 0;
}