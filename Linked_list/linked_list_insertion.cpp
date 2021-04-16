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
void insert_element(node *head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}
int main()
{
    node *head = NULL;

    return 0;
}