#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    string name;
    node* next;
    node* prev;

    node(string name)
    {
        this->name = name;
        this->next = NULL;
        this->prev = NULL;
    }
};
void input(node*& head, node*& tail, string name)
{
    node* newnode = new node(name);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void next(node*&head)
{   
    if (head->next!=NULL)
    {
        head=head->next;
        cout<<head->name<<endl; 
        return;
    }
    else
    {
        cout<<"Not Available"<<endl;
    }
}
void prev(node*&head)
{   
    if (head->prev!=NULL)
    {
        head=head->prev;
        cout<<head->name<<endl;
        return;
    }
    else
    {
    cout<<"Not Available"<<endl;
    }
}
void find(node*&head, string adress)
{
    node*temp=head;
    while (head!=NULL)
    {
        if (head->name==adress)
        {
            cout << head->name << endl;
            return;
        }
        head=head->next;
    }
    head=temp;
    cout << "Not Available" << endl;
}
int main()
{   
    node*head=NULL;
    node*tail=NULL;
    string name;
    while (true)
    {
        cin>>name;
        if (name=="end")
        {
            break;
        }
        else
        {
            input(head,tail,name);
        }
    }
    int q;
    cin>>q;
    string direction;
    while (q--)
    {
        cin>>direction;
        if (direction == "visit")
        {
            string address;
            cin >> address;
            find(head,address);
        }
        else if (direction=="prev")
        {
            prev(head);
        }
        else if (direction=="next")
        {
            next(head);
        }
    }
    return 0;
}