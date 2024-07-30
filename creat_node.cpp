#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node* next;
};
int main()
{
    node a,b;
    a.val=10;
    b.val=20;
    a.next= &b;
    b.next=NULL;
    std::cout<<a.val<<endl;
    std::cout<<b.val<<endl;
    std::cout<<a.next->val<<endl;
    return 0;
}