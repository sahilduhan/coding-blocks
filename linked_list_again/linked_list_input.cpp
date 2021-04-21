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
    node *head = NULL;
    int data;
    cin >> data;
    while (data != -1)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
        }
        cin >> data;
    }
}

int main()
{

    return 0;
}