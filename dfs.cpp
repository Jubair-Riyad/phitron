#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>adjlst[N];
bool visited[N];
void dfs(int u)
{
    //section 1 : actions just after entering node "u"
    visited[u]= true;
    cout<<"visited node :"<< u<<endl;
    for (int v: adjlst[u])
    {
        //section 2 : action just before entering a new neighbor
        if (visited[v]== true) continue;
        dfs(v);
        //section 3 : action after exiting a neighbor
    }
    //section 4 : action before exiting node "u"
    
}
int main()
{
    int n,m;
    cin >>n>>m;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjlst[u].push_back(v);
        adjlst[v].push_back(u);
    }
    
    dfs(1);

    // for (int i = 1; i <=n; i++)
    // {
    //     cout<<"List of "<<i<<": ";
    //     for(int j: adjlst[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<endl<<"visiting array\n"<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<"Node :"<< i<<"Status: "<< visited[i]<<endl; 
    }
    
    
    return 0;
}