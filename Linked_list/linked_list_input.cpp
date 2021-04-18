#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
//passing a pointer variable by reffrence
void insert_element(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}
void print(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insert_element(head, 5);
    insert_element(head, 4);
    insert_element(head, 3);
    print(head);

    return 0;
}