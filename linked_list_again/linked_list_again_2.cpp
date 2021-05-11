#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class linkedList
{
    node *head;
    node *tail;
    int size;
    void insert(int value)
    {
        node *temp = new node();
        temp->data = value;
        temp->next = NULL;
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
};

int main()
{
    linkedList l1;

    return 0;
}