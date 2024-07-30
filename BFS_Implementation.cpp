#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjlst[N];
bool visited[N];
int level[N];
void bfs (int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    level[s]=0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout<<"Visited Node : "<<u<<endl;

        for (int v: adjlst[u])
        {
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v]= level[u]+1;
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
    bfs(1);
    cout<<endl<<"**************************"<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<"Level of Node "<< i << ":"<< level[i]<<endl;
    }
    
        
    return 0;
}