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
void levelorder_print(node* root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        node *f= q.front();
        q.pop();

        cout<<f->val<<" ";

        if (f->left!=NULL)
        {
            q.push(f->left);
        }
        if (f->right!=NULL)
        {
            q.push(f->right);
        }
    }
}
void insert(node* &root, int x)
{
    if(root == NULL)
    {
        root = new node(x);
        return;
    }

    if (root->val > x)
    {
        if (root->left==NULL)
        {
            root->left= new node(x);
        }
        else
        {
            insert(root->left,x);
        }
    }
    
    if (root->val < x)
    {
        if (root->right == NULL)
        {
            root->right= new node(x);
        }
        else
        {
            insert(root->right,x);
        }
    }
}

int main()
{
    node* root = level_input();
    int x ; 
    cin >> x;
    insert(root, x);   
    levelorder_print(root);
    return 0;
}   