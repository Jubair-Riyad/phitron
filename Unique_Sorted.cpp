#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;
        set<int>s;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        for (int x : s) 
        {
            v.push_back(x);
        }

        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    
}
