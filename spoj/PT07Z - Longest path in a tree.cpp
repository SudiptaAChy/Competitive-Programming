#include<bits/stdc++.h>
#define mx 1999999
#define pb push_back
using namespace std;
vector<int>adj[mx];
bool visited[mx];
int len,nd;
int dis[mx];
void bfs(int st)
{
    visited[st]=true;
    queue<int>q;
    q.push(st);
    dis[st]=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int sz=adj[x].size();
        for(int i=0;i<sz;i++)
        {
            int v=adj[x][i];
            if(visited[v]==false)
            {
                visited[v]=true;
                dis[v]=dis[x]+1;
                nd=v;
                q.push(v);
            }
        }
    }
}
main()
{
    int ans=0;
    memset(visited,false,sizeof visited);
    int n,u,v;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    bfs(1);
    for(int i=0;i<mx;i++)
        ans=max(ans,dis[i]);
    memset(visited,false,sizeof visited);
    memset(dis,0,sizeof dis);
    bfs(nd);
    int ans1=0;
    for(int i=0;i<mx;i++)
        ans1=max(ans1,dis[i]);
    ans=max(ans,ans1);
    cout<<ans;
}
