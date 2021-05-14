#include <bits/stdc++.h>
using namespace std;
class tree_node
{
    int data;
    tree_node *right;
    tree_node *left;
    tree_node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};