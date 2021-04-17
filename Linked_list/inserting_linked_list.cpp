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
void print(node *head)
{
    while (head != 0)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
        }
        cin >> data;
    }
}
int main()
{
    // node n1(10);
    // node *head = &n1;

    return 0;
}