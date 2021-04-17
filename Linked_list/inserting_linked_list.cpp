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
    while (head != 0)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
node*takeinput()
{
    
}
int main()
{

    return 0;
}