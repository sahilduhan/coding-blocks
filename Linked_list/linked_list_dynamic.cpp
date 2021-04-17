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
int main()
{
    node n1(10);
    node n2(20);
    n1.next = &n2;
    cout << n1.data << " " << n2.data << endl;
    node *n3 = new node(30);
    node *n4 = new node(40);
    // node *head = &n3;
    n3->next = n4;

    return 0;
}