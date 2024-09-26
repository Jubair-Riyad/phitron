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
void insert_tail(node* &head, node *&tail, int val)
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
void sort(node*head)
{
    for (node* i = head; i->next!=NULL; i=i->next)
    {
        for (node* j = i->next; j!=NULL; j=j->next)
        {
            if (i->val>j->val)
            {
                swap(i->val, j->val);
            }
        } 
    }
}
void remove_duplicates(node* head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }
        if (temp->next == NULL)
            break;
        else if (temp->val != temp->next->val)
        {
            temp = temp->next;
        }
    }

}
void print(node*head)
{
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}
int main()
{
    node*head=NULL;
    node*tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);     
    }
    sort(head);
    remove_duplicates(head); 
    print(head);
    
    return 0;
}