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
    node a(10);
    node b(20);   
    a.next= &b;

    std::cout<<a.val<<endl;
    std::cout<<b.val<<endl;
    std::cout<<a.next->val<<endl;
    return 0;
}