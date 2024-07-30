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

void foroward(node* head)
{
    if (head== NULL)
    {
        return;
    }
    
    cout<<head->val<<" ";
    foroward(head->next);
}

void reverse(node* head)
{
    if (head== NULL)
    {
        return;
    }
    reverse(head->next);
    cout<<head->val<<" ";
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

    reverse(head);
    cout<<endl;
    foroward(head);

    return 0;
}