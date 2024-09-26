#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int>st;
    queue<int>q;
    list<int>lst;
    list<int>lq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
        lst.push_back(st.top());
        st.pop();
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        lq.push_back(q.front());
        q.pop();
    }
    int flag = 0;
    if (lst.size()!=lq.size())
    {
        flag=1;
    }
    else
    {
        while (!lst.empty())
        {
            if (lst.front() != lq.front())
            {
                flag=1;
                break;
            }
            lst.pop_front();
            lq.pop_front();
        }
    }
    if (flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}