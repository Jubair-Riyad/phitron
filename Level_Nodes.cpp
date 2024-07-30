#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node* left;
    node* right;

    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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

void levelorder_print(node* root, vector<pair<int, int>>& v)
{
    if (root == NULL)
    {
        return;
    }
    queue<pair<node*, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<node*, int> pr = q.front();
        q.pop();
        node* p = pr.first;
        int level = pr.second;

        v.push_back({p->val, level});

        if (p->left != NULL)
        {
            q.push({p->left, level + 1});
        }
        if (p->right != NULL)
        {
            q.push({p->right, level + 1});
        }
    }
}

int main()
{
    node* root = level_input();
    int x;
    cin >> x;
    vector<pair<int, int>> v;
    levelorder_print(root, v);

    bool found = false;

    for (pair<int, int> p : v)
    {
        if (x == p.second)
        {
            cout << p.first << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << "Invalid";
    }

    return 0;
}
