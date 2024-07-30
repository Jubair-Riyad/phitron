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
    {   //1 line theke antee hobe
        node* p = q.front();
        q.pop();

        //2 jabotio kaj korte hobe
        int l,r;
        cin>>l>>r;//value input
        node*newleft;
        node*newright;
        //value assign
        if (l != -1) newleft = new node(l);
        else newleft = NULL;
        if (r != -1) newright = new node(r);
        else newright = NULL;

        //connection
        p->left=newleft;
        p->right=newright;

        //3 children gulake line a dite hobe
        if (p->left!=NULL) q.push(p->left);
        if (p->right!= NULL) q.push(p->right);       
    }
    
    return root;
    
}
void levelorder_print(node*root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        //line theke ante hobe
        node *f= q.front();
        q.pop();

        //jabotio kaj korte hobe
        cout<<f->val<<" ";
        
        //children gulake line a dite hobe
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
int count_leaf(node*root)
{
    if (root==NULL) return 0;
    if (root->left==NULL && root->right==NULL)
    {
        cout<<endl<<"Leaf Node:"<<root->val<<" ";
        return 1;
    }
    else
    {
        int l= count_leaf(root->left);
        int r= count_leaf(root->right);      
        return l+r;
    }
}
int mx_height(node* root)
{
    if(root==NULL) return 0;
    int l = mx_height(root->left);
    int r = mx_height(root->right);
    return max(l,r)+1; //left r right er moddhe j boro tar shathe 1 jog kore pthabe
}
int main()
{
    node* root= level_input();
    levelorder_print(root);
    cout<<endl<<"Total: "<<count_leaf(root)<<endl;
    cout<<"Height: "<<mx_height(root)<<endl;
    return 0;
}