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
void input_value(node*&head, node*&tail, int val)
{
    node*newnode=new node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    node*temp=tail;
    temp->next=newnode;
    newnode->previous=temp;
    tail=newnode;
}
void print_forword(node*head)
{
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}
void print_reverse(node*tail)
{
    while (tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->previous;
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
        input_value(head, tail,val);
    }
    print_forword(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}
