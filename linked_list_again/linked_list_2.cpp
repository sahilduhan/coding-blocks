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
}
void print()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    return 0;
}