#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjlst[N];
bool visited[N];

bool dfs(int u, int p=-1)
{
    bool cycleExist = false;
    visited[u] = true;
    for(int v: adjlst[u])
    {
        if(v==p) continue;
        if(visited[v]==true)return true;
        cycleExist = cycleExist || (v,p);
    }
    return cycleExist;
}

int main()
{
    int n,m;
    cin >>n>>m;
    for (int i = 0; i <m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjlst[u].push_back(v);
        adjlst[v].push_back(u);
    }
    bool isCycle = false;
    
    for (int i = 1; i <n; i++)
    {
        if (visited[i]==true)continue;
        isCycle = dfs(1);
    }
    

    if (isCycle == true)
    {
        cout<<"Cycle Deteceted !!!";
    }
    else
    {
        cout<<"No cycle Deteceted !";
    }
    
    return 0;
}