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
node *take_input()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != NULL)
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
    node *head = take_input();
    print(head);

    return 0;
}