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
void insert_in_tail(node *&head, int v)
{
    node*newNode=new node(v);
    if (head==NULL)
    {
        head=newNode;
        return;
    }
    
    node *temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void print_linked_list(node* head)
{
    cout<<"Your Linked List: ";
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
int main()
{
    node*head=NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Terminate"<<endl;
        int op;
        cin>>op;
        if (op==1)
        {
            cout<<"Please Enter Value: ";
            int v;
            cin>>v;
            insert_in_tail(head,v);
        }
        else if (op==2)
        {
            print_linked_list(head);
        }
        else if (op==3)
        {
            break;
        }
    }
    return 0;
}
