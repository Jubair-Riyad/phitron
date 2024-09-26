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

void leafnode(node* root, vector<int>*v)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        v->push_back(root->val);
    }
    leafnode(root->left,v);
    leafnode(root->right,v);
} 

int main() 
{
    node* root = levelinput();
    vector<int>v;
    leafnode(root, &v);
    int max = *max_element(v.begin(), v.end()); //ai function amar jana cilona, ami google theke copy koreci, 
    int min = *min_element(v.begin(), v.end()); // refference https://www.geeksforgeeks.org/how-to-find-the-maximum-element-of-a-vector-using-stl-in-c/
    cout<<max<<" "<<min;
    return 0;
}
