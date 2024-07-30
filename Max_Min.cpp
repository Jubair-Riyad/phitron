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
    cout<<head->val<<" "<<tail->val;
    return 0;
}