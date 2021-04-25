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
node *reverse(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *small_ans = reverse(head->next);
    node *temp = small_ans;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    temp->next = NULL;
    return small_ans;
}
int manin()
{
    node *head = take_input();
    print(head);
    reverse(head);

    return 0;
}