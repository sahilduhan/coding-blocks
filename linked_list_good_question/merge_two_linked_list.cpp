#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *sortedMerge(Node *head1, Node *head2)
{
    Node *temp_1 = head1;
    Node *temp_2 = head2;
    Node *new_head = new Node(-1);
    while (temp_1 && temp_2)
    {
        Node *new_node = new Node(-1);
        if (temp_1->data <= temp_2->data)
        {
            new_node->data = temp_1->data;
            new_node->next = NULL;
            new_head->next = new_node;
            temp_1 = temp_1->next;
        }
        else
        {
            new_node->data = temp_2->data;
            new_head->next = new_node;
            temp_2 = temp_2->next;
        }
    }
    while (temp_1)
    {
        Node *new_node = new Node(-1);

        new_node->data = temp_1->data;
        new_node->next = NULL;
        new_head->next = new_node;
        temp_1 = temp_1->next;
    }
    while (temp_2)
    {

        Node *new_node = new Node(-1);
        new_node->data = temp_2->data;
        new_node->next = NULL;
        new_head->next = new_node;
        temp_2 = temp_2->next;
    }
    return new_head->next;
}
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
}
int main()
{
    Node *head = new Node(100);
    Node *second = new Node(200);
    Node *third = new Node(300);
    Node *fourth = new Node(400);
    Node *fifth = new Node(500);
    Node *sixth = new Node(600);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    // second linked list

    Node *head_2 = new Node(15);
    Node *second_2 = new Node(17);
    Node *third_2 = new Node(30);
    Node *fourth_2 = new Node(4020);
    Node *fifth_2 = new Node(50023);
    Node *sixth_2 = new Node(600222);
    head_2->next = second_2;
    second_2->next = third_2;
    third_2->next = fourth_2;
    fourth_2->next = fifth_2;
    fifth_2->next = sixth_2;
    sixth_2->next = NULL;
    sortedMerge(head, head_2);

    return 0;
}