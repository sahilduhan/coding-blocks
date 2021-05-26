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
    while (head != NULL)

    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{

    return 0;
}