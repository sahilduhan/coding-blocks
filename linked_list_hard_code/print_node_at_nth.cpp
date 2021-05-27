#include <bits/stdc++.h>
using namespace std;
class linked_list_node
{
public:
    int data;
    linked_list_node *next;
    linked_list_node(int data) : data(data), next(NULL)
    {
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
void print_element(linked_list_node *head, int num)
{
    int count = 0;
    linked_list_node *temp = head;
    while (temp->next != NULL)
    {
        if (count == num)
        {
            cout << temp->data << " ";
        }
        temp = temp->next;
        count++;
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
    print(head);
    print_element(head, 3);

    return 0;
}