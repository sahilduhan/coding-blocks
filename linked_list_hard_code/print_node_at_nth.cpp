#include <bits/stdc++.h>
using namespace std;
class linked_list_node
{
public:
    int data;
    linked_list_node *next;
    linked_list_node(int data) : data(data), next(NULL)
    {
    }
};
void print(linked_list_node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
}
void print_element(linked_list_node *head, int num)
{
    int count = 0;
    linked_list_node *temp = head;
    while (count != num)
    {
    }
}
int main()
{

    return 0;
}