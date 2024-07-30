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

void delete_at_position(node* head,int pos)
{
    node* temp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        temp=temp->next;
    }
    node*deletenode = temp->next;
    temp->next=temp->next->next;
    delete deletenode;
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

void delete_head(node*&head)
{
    node*deletenode=head;
    head=head->next;
    delete deletenode;
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
    int pos;
    cin>>pos;
    if (pos>=size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if (pos==0)
    {
        delete_head(head);
    }
    
    else
    {
        delete_at_position(head, pos);
    }
    
    print_linked_list(head);

    return 0;
}