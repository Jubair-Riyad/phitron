#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *previous;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->previous = NULL;
    }
};
class mystack
{
    public:
        node *head=NULL;
        node *tail=NULL;
        int sz=0;
        void push(int val)
        {
            sz++;
            node*newnode=new node(val);
            if (head==NULL)
            {
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next=newnode;
            newnode->previous=tail;
            tail=tail->next;
        }
        void pop()
        {
            sz--;
            node*deletenode=tail;
            tail=tail->previous;
            delete deletenode;
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz==0)return true;
            else return false;
        }
};
class myqueue
{
    public:
        node*head=NULL;
        node*tail=NULL;
        int sz=0;
        void push(int val)
        {
            sz++;
            node*newnode=new node(val);
            if (head==NULL)
            {
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next=newnode;
            tail=tail->next;
        }
        void pop()
        {
            sz--;
            node*deletenode=head;
            head=head->next;
            delete deletenode;
        }
        int front()
        {
            return head->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if (sz==0)return true;
            else  return  false;            
        }
};
class mylist
{
    public:
        node*head=NULL;
        node*tail=NULL;
        int sz=0;
        void push(int val)
        {
            sz++;
            node*newnode=new node(val);
            if (head==NULL)
            {
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next=newnode;
            tail=tail->next;
        }
        void pop()
        {
            sz--;
            node*deletenode=head;
            head=head->next;
            delete deletenode;
        }
        int front()
        {
            return head->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if (sz==0)return true;
            else  return  false;            
        }
};
int main()
{
    mystack st;
    myqueue q;
    mylist lst;
    mylist lq;
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
        lst.push(st.top());
        st.pop();
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        lq.push(q.front());
        q.pop();
    }
    int flag = 0;
    if (lst.size()!=lq.size())
    {
        flag=1;
    }
    else
    {
        while (!lst.empty())
        {
            if (lst.front() != lq.front())
            {
                flag=1;
                break;
            }
            lst.pop();
            lq.pop();
        }
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