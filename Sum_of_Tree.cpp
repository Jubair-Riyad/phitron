#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* left;
    node* right;

    node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* levelinput() 
{
    int val;
    cin >> val;
    node* root;
    if (val != -1) root = new node(val);
    else root = NULL;
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
        cin >> l>> r;

        if (l!= -1) 
        {
            p->left = new node(l);
            q.push(p->left);
        }
        if (r!= -1) 
        {
            p->right = new node(r);
            q.push(p->right);
        }
    }
    return root;
}

void preorder(node* root, long long int *sum)
{
    if (root==NULL)
    {
        return;
    }
    *sum= *sum + root->val;
    preorder(root->left, sum);
    preorder(root->right, sum);
} 

int main() 
{
    node* root = levelinput();
    long long int sum = 0;
    preorder(root, &sum);
    cout<< sum;
    return 0;
}
