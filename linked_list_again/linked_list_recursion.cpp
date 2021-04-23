#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node *newnode(int data)
{
    node *new_node = new node(data);
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
node *take_input(node *head, int data)
{
    if (head == NULL)
        return newnode(data);
    else
        head->next = take_input(head->next, data);
    return head;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{

    return 0;
}