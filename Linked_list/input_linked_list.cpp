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
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        cin >> data;
    }
    return head;
}
int main()
{
    node *head = takeinput();
    print(head);
    return 0;
}