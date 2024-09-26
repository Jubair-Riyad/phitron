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
void delete_position(node*head, int pos)
{
    node*temp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        temp=temp->next;
    }
    node*deletenode= temp->next;
    temp->next=temp->next->next;
    temp->next->previous=temp;
    delete deletenode;
}
void delete_head(node*&head, node*&tail)
{
    node*deletenode=head;
    head=head->next;
    delete deletenode;
    if (head==NULL)
    {
        tail=NULL;
        return;
    }
    head->previous=NULL;
}
void delete_tail(node*&head,node*&tail)
{
    node*deletetail=tail;
    tail=tail->previous;
    delete deletetail;
    if (tail==NULL)
    {
        head=NULL;
        return;
    }
    
    tail->next=NULL;
    
}
int size(node*head)
{
    int cnt=0;
    while (head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
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

        cout<<endl;
        foroward(head);
        cout<<endl<<endl;
        reverse(tail);

        int pos;
        cout<<endl<<"Insert Pos: ";
        cin>>pos;
        if (pos==0)
        {
            delete_head(head, tail);
        }
        else if (pos==size(head)-1)
        {
            delete_tail(head,tail);
        }
        else
        {
            delete_position(head,pos);
        }
        foroward(head);
        cout<<endl<<endl;
        reverse(tail);
    
    return 0;
}