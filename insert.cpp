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
    cout<<endl;
}

void insert_at_position(node* head, int pos, int val)
{
    node* newnode= new node(val);
    node*temp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        temp=temp->next;
    }
    
    newnode->next=temp->next;
    temp->next=newnode;
}

int size(node* head)
{
    int cnt=0;
    node* temp = head;
    while (temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void insert_at_head(node* &head, int val)
{
    node* newnode= new node (val);
    newnode->next= head;
    head=newnode;
}

void insert_at_tail(node* &head, node *&tail, int val)
{
    node *newnode=new node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
    
}
int main()
{
    node *head= new node(10);
    node *a= new node(20);
    node *b= new node(30);
    node *c= new node(40); 
    node *d= new node(50);
    node *tail=d;

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    print_linked_list(head);
    int pos, val;
    cin>>pos>>val;

    if (pos>size(head))
    {
        cout<<"Invalide Index"<<endl;
    }
    else if (pos==0)
    {
        insert_at_head(head,val);
    }
    else if (pos==size(head))
    {
        insert_at_tail(head, tail, val);
    }
    
    
    else
    {
        insert_at_position(head,pos,val);
    }
    
    print_linked_list(head);
    return 0;
}