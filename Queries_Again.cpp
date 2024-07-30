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
    cout<<"L -> ";
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(node*tail)
{
    cout<<"R -> ";
    node*temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->previous;
    }
    cout<<endl;
}
void insert_at_position(node*&head, node*tail, int pos, int val)
{
    node*newnode = new node(val);
    node*temp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->previous=newnode;
    newnode->previous=temp;
    temp->next=newnode;
}
void insert_at_head(node*&head, node*&tail,int val)
{
    node*newnode=new node(val);
    if (head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
    newnode->next=head;
    head->previous=newnode;
    head=newnode;
}
void insert_at_tail(node*&head,node*&tail, int val)
{
    node*newnode=new node(val);
    if (tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->previous=tail;
    tail=newnode;
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
    node*head=NULL;
    node*tail=NULL;
    int q;
    cin>>q;
    while (q--)
    {
    int pos,val;
    cin>>pos>>val;
    if (pos==0)
    {
        insert_at_head(head,tail, val);
        foroward(head);
        reverse(tail);
    }
    else if (pos==size(head))
    {
        insert_at_tail(head,tail, val);
        foroward(head);
        reverse(tail);
    }
    else if (pos>size(head))
    {
        cout<<"Invalid";
        cout<<endl;
    }
    else
    {
        insert_at_position(head,tail, pos, val);
        foroward(head);
        reverse(tail);
    }
    }
    return 0;
}