#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node*next;
        node*previous;

    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->previous=NULL;
    }
};
void foroward(node*head)
{
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void reverse(node*tail)
{
    node*temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->previous;
    }
    
}
int main()
{
    node*head= new node(10);
    node*a=new node(20);
    node*b=new node(30);
    node*c=new node(40);
    node*d=new node(50);
    node*tail=d;
    

    head->next=a;
    a->previous=head;
    a->next=b;
    b->previous=a;
    b->next=c;
    c->previous=b;
    c->next=d;
    d->previous=c;
    
    foroward(head);
    cout<<endl<<endl;
    reverse(tail);
    return 0;
}