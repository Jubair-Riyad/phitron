#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node* next;

    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
    
};
int main()
{
    node *head=new node(10);
    node *a=new node(20);

    head->next=a;

    std::cout<<head->val<<endl;
    std::cout<<a->val<<endl;
    std::cout<<head->next->val<<endl;
    return 0;
}