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
    int size;
    cout << "Enter the size - ";
    cin >> size;
    node *head = NULL;
    node *tail = NULL;
    while (size--)
    {
        int data;
        cin >> data;
        node *temp = new node(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }
    return head;
}
void print(node *head)
{
    if (head == NULL)
    {
        return;
    }
    print(head->next);
    cout << head->data << " ";
}
int main()
{
    node *head = take_input();
    // print using recussion!!
    print(head);
    return 0;
}