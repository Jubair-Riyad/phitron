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
void insert_at_tail_1(node* &head1, node *&tail1, int val1)
{
    node *newnode=new node(val1);
    if (head1==NULL)
    {
        head1=newnode;
        tail1=newnode;
        return;
    }
    else
    {
        tail1->next=newnode;
        tail1=newnode;
    }
}
void insert_at_tail_2(node* &head2, node *&tail2, int val2)
{
    node *newnode=new node(val2);
    if (head2==NULL)
    {
        head2=newnode;
        tail2=newnode;
        return;
    }
    else
    {
        tail2->next=newnode;
        tail2=newnode;
    }  
}
void compare(node* head1, node *head2, int a, int b)
{
    int flag=0;
    while (head1->next!=NULL || head2->next!=NULL)
    {
        if (a != b)
        {
            flag=1;
            break;
        }
        head1=head1->next;
        head2=head2->next;
        if (head1->val != head2->val)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"YES";
    }
    else if(flag==1)
    {
        cout<<"NO";
    }
}
int size1(node* head1)
{
    int cnt=0;
    node* temp = head1;
    while (temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int size2(node* head2)
{
    int cnt=0;
    node* temp = head2;
    while (temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int main()
{
    node *head1 = NULL;
    node *tail1 = NULL;
    int val1,val2;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_at_tail_1(head1, tail1, val1);  
    }
    node *head2 = NULL;
    node *tail2 = NULL;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_at_tail_2(head2, tail2, val2);
    }
    int a= size1(head1);
    int b=size2(head2);
    compare(head1, head2,a,b);
    return 0;
}