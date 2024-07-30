#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(node *head)
{
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    
};
int main()
{
    node *head= new node(10);
    node *a= new node(20);
    node *b= new node(30);
    node *c= new node(40); 
    node *d= new node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    print_linked_list(head);
    return 0;
}