#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *head;
void insert(int x)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void print()
{
    node *temp = head;
    cout << " the list is " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int n, x, i;
    head = NULL;
    cout << " enter the size of list " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << " enter the element " << endl;
        cin >> x;
        insert(x);
        print();
    }
    return 0;
}