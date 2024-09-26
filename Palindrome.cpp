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
void reverse(node *&head, node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
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
    node *newhead = NULL;
    node *newtail = NULL;
    node *temp = head;
    while (temp != NULL)
    {
        insert_tail(newhead, newtail, temp->val);
        temp = temp->next;
    }
    reverse(newhead, newhead);
    temp = head;
    node *temp2 = newhead;
    int flag=0;
    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            flag=1;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }   
    if (flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}