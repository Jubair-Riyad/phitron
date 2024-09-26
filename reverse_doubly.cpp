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
void print_forward(node*head)
{
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}
void print_reverse(node*tail)
{
    while (tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->previous;
    }
}

void reverse(node*&head, node*&tail)
{
    node*i=head;
    node*j=tail;
    while (i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->previous;
    }
    swap(i->val,j->val);
}
int main()
{
    node*head=new node(10);
    node*a=new node (20);
    node*b=new node (30);
    node*c=new node (40);
    node*d=new node (50);
    node*tail=d;
    
    head->next=a;
    a->previous=head;
    a->next=b;
    b->previous=a;
    b->next=c;
    c->previous=b;
    c->next=d;
    d->previous=c;

    print_forward(head);
    cout<<endl;
    print_reverse(tail);
    cout<<endl<<endl;
    reverse(head,tail);
    print_forward(head);
    cout<<endl;
    print_reverse(tail);

    return 0;
}