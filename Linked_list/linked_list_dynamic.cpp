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
void print(node *head)
{
    node *temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node n1(10);
    node n2(20);
    node n3(30);
    node n4(40);
    node n5(50);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    node *head = &n1;
    print(head);
    // cout << n1.data << " " << n2.data << endl;
    // node *n3 = new node(30);
    // node *n4 = new node(40);
    // node *head = &n3;
    // n3->next = n4;

    return 0;
}