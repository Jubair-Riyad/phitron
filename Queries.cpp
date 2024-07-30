#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    long long int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(node* &head,node* &tail, long long int val)
{
    node* newnode= new node (val);
    if (head==NULL)
    {
        tail=newnode;
    }
    newnode->next= head;
    head=newnode;
    
}

void insert_at_tail(node* &head, node *&tail, long long int val)
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
    long long int q;
    cin>>q;
    node *head=NULL;
    node *tail=NULL;
    while (q--)
    {
        long long int pos, val;
        cin>>pos>>val;
        if (pos==0)
        {
            insert_at_head(head,tail,val);
        }
        else
        {
            insert_at_tail(head, tail, val);
        }
        cout<<head->val<<" "<<tail->val<<endl;
    }
    return 0;
}