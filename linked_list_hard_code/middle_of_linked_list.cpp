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
void print_data(linked_list_node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    print_data(head->next);
}
void middle_element(linked_list_node *head)
{
    linked_list_node *first = head;
    linked_list_node *second = head;
    while (second != NULL)
    {
        first = first->next;
        second = second->next->next;
    }
    cout << "middle elment is:" << first->data << " ";
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
    print_data(head);
    middle_element(head);
    return 0;
}