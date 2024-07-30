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
node* convert(int a[], int n, int l, int r)
{
    if (l>r)
    {
        return NULL;
    }
    
    int mid = (l+r)/2;
    node* root = new node (a[mid]);
    node* leftnode = convert(a, n, l, mid-1);
    node* rightnode = convert (a, n, mid+1, r);
    root->left = leftnode;
    root->right = rightnode;
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

int main()
{
    int n;
    cin>>n;    
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        cin>>a[i];
    }
    node* root = convert(a, n, 0, n-1);
    levelorder_print(root);
    return 0;
}