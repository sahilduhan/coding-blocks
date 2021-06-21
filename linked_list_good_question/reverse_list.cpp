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
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *ans = reverse(head->next);
    Node *temp = ans;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return ans;
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
    reverse(head);

    return 0;
}