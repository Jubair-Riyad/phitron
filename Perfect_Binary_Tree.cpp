#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node*left;
        node*right;

    node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* level_input()
{
    int val;
    cin>>val;
    node*root;
    if (val!=-1) root= new node(val);
    else root==NULL;
    queue<node*>q;
    if (root!=NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {   
        node* p = q.front();
        q.pop();

        
        int l,r;
        cin>>l>>r;
        node*newleft;
        node*newright;
        
        if (l != -1) newleft = new node(l);
        else newleft = NULL;
        if (r != -1) newright = new node(r);
        else newright = NULL;

        
        p->left=newleft;
        p->right=newright;

        
        if (p->left!=NULL) q.push(p->left);
        if (p->right!= NULL) q.push(p->right);       
    }
    
    return root;
    
}

int count(node*root)
{
    if (root==NULL) return 0;
    int l = count(root->left);
    int r = count (root->right);
    return l+r+1;
}

int mx_height(node* root)
{
    if(root==NULL) return 0;
    int l = mx_height(root->left);
    int r = mx_height(root->right);
    return max(l,r)+1;
    }
int main()
{
    node* root= level_input();
    int tl= count(root);
    int mh= mx_height(root);
    // if (tl == (mh*mh)-1) //wrote by me
    if (tl == ((1<<mh)-1)) // corrected by chatgpt (Jodi aitar jonno amake mark na dewa hoi amar kono ovijog nai, please banned koirenna course theke)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }  
    return 0;
}