#include <bits/stdc++.h>
using namespace std;
class linked_list_node
{
public:
    int data;
    linked_list_node *next;
    linked_list_node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(linked_list_node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
}
void insert_at_end(linked_list_node *head, int data)
{
    int count = 0;
    linked_list_node *new_node = new linked_list_node(data);
    linked_list_node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            linked_list_node *a = new_node;
            temp->next = a;
            a->next = NULL;
        }
    }
}
int main()
{

    linked_list_node *head = new linked_list_node(100);
    linked_list_node *second = new linked_list_node(200);
    linked_list_node *third = new linked_list_node(300);
    linked_list_node *fourth = new linked_list_node(400);
    linked_list_node *fifth = new linked_list_node(500);
    linked_list_node *sixth = new linked_list_node(600);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    insert_at_end(head, 1000);
    print(head);

    return 0;
}