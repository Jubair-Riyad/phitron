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
int main()
{
    mystack st;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}