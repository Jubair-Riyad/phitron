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
    cin >> val;
    node* root;
    if (val != -1)
        root = new node(val);
    else
        root = NULL;
    queue<node*> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        node* p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        node* newleft;
        node* newright;
        if (l != -1) newleft = new node(l);
        else newleft = NULL;
        if (r != -1) newright = new node(r);
        else newright = NULL;
        p->left = newleft;
        p->right = newright;
        if (p->left != NULL) q.push(p->left);
        if (p->right != NULL) q.push(p->right);
    }
    return root;
}
bool search(node* root, int x)
{
    if (root==NULL) return false;
    if (root->val==x) return true;
    if (x < root->val)
    {
        return search(root->left,x);
    }
    else
    {
        return search(root->right,x);
    }
}

int main()
{
    node* root = level_input();
    if (search(root, 6))
    {
        cout<<"Yes, Found";
    }
    else
    {
        cout<<"No, Not Found";
    }
    
    return 0;
}