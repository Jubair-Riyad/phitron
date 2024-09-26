#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    queue<string> tc;
    while (q--)
    {
        int n;
        cin>>n;
        if (n==0)
        {
            string nm;
            cin>>nm;
            tc.push(nm);
        }
        else if (n==1)
        {
            if (tc.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<tc.front()<<endl;
                tc.pop();
            }
        }
    }
    return 0;
}