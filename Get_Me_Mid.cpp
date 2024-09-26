#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node*next;

    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

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

void print_linked_list(node *head, int pos)
{
    node*temp=head;
    for (int i = 1; i <=(pos-1)/2; i++)
    {
        temp=temp->next;
    }
    if (pos%2!=0)
    {
        cout<<temp->val;
    }
    else
    {
        cout<<temp->val<<" "<<temp->next->val;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    for (node* i = head; i->next!=NULL; i=i->next)
    {
        for (node* j = i->next; j!=NULL; j=j->next)
        {
            if (i->val<j->val)
            {
                swap(i->val, j->val);
            }
            
        }
        
    }
    
    print_linked_list(head,size(head));
    return 0;
}