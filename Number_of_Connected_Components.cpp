#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjlst[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    cout<<u<<",";
    for(int v: adjlst[u])
    {
        if(visited[v]==true)continue;
        dfs(v);
    }
}

void bfs (int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v: adjlst[u])
        {
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
        }
    }
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
    
    int cc = 0;

    for (int i = 1; i <=n; i++)
    {
        if(visited[i]==true) continue;
        cout<<"Conected component "<<": ";
        dfs(i);
        cout<<endl;
        cc=cc+1;
    }
    
    cout<<"Number of connected component : "<<cc<<endl;

        
    return 0;
}