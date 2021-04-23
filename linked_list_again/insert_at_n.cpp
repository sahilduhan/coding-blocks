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
    node *tail = NULL;
    while (data != -1)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = tail->next;
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
void insert_at_n(node *head, int adress, int data)
{
    node *new_node = new node(data);
    int count = 0;
    node *temp = head;
    while (count < adress - 1)
    {
        temp = temp->next;
        count++;
    }
    node *a = temp->next;
    temp->next = new_node;
    new_node->next = a;
}

int main()
{
    node *head = take_input();
    print(head);
    int val = 0;
    cout << " enter the value " << endl;
    cin >> val;
    insert_at_n(head, 5, val);
    print(head);
    return 0;
}