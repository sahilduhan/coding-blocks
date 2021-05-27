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
bool is_found(linked_list_node *head, int number)
{
    linked_list_node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data == number)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void is_found_at_n(linked_list_node *head, int num)
{
    if (head == NULL)
    {
        return;
    }
    if (head->data == num)
    {
        cout << " found " << endl;
    }
    is_found_at_n(head = head->next, num);
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
    is_found_at_n(head, 100);
    cout << is_found(head, 100);
    // isfound(head, 10);
    return 0;
}