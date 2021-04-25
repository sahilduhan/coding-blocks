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
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
void print_data(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void length(node *head)
{
    int count = 0;
    node *temp = head;
    int mid = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    cout << endl
         << " the length is ";
    cout << count << " ";
}
void mid_element(node *head)
{
    node *temp = head;
    node *slow = head;
    node *fast = head;
    while (temp != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << endl
         << slow->data << " ";
}

int main()
{
    node *head = take_input();
    print_data(head);
    length(head);
    mid_element(head);
    return 0;
}