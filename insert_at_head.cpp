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
void insert_at_head(node *&head, int v)
{
    node* newNode= new node(v);
    newNode->next=head;
    head=newNode;
}
void insert_at_position(node *head,int pos, int v)
{
    node*newNode = new node(v);
    node*temp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        temp->next=temp;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void insert_at_tail(node *&head, int v)
{
    node*newNode=new node(v);
    if (head==NULL)
    {
        head=newNode;
        return;
    }
    
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp->next=temp;
    }
    temp->next=newNode;
}
void print_linked_list(node *head)
{
    node*temp=head;
    cout<<"Your Linked List: ";
    while (temp!=NULL)
    {        
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    node * head=NULL;
    while (true)
    {
        int op;
        cout<<"Option 1: Insert at Head "<<endl;
        cout<<"Option 2: Insert at Position "<<endl;
        cout<<"Option 3: Insert at Tail "<<endl;
        cout<<"Option 4: Print Linked List "<<endl;
        cout<<"Option 5: Terminate "<<endl;
        cout<<endl<<"Enter Option: ";
        cin>>op;
        if (op==1)
        {
            int v;
            cout<<"Enter Value: ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if (op==2)
        {
            int pos, v;
            cout<<"Enter Position: ";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>v;
            if (pos==0)
            {
                insert_at_head(head,v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op==3)
        {
            int v;
            cout<<"Enter Value: ";
            cin>>v;
            insert_at_tail(head,v);
        }
        else if (op==4)
        {
            print_linked_list(head);
        }
        else if (op==5)
        {
            break;
        }
        
    }
    
    return 0;
}