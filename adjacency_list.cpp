#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int,int>>adjlst[N];
int main()
{
    int n,m;
    cin >>n>>m;
    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjlst[u].push_back({v,w});
        adjlst[v].push_back({u,w});
    }
    
    for (int i = 1; i <=n; i++)
    {
        cout<<"List of "<<i<<": ";
        for(auto j: adjlst[i])
        {
            cout<<"("<<j.first <<","<<j.second<<")"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}