#include<bits/stdc++.h>
#define mx 1000009
#define pb push_back
using namespace std;
vector<int>adj[mx];
bool visited[mx];
int n,m,ans=0;
int a[mx];
void dfs(int st,int cat)
{
    visited[st]=true;
    if(a[st]==1) cat++;
    else cat=0;
    if(cat>m) return;
    bool leaf=true;
    for(int i=0;i<adj[st].size();i++)
    {
        int v=adj[st][i];
        if(visited[v]==false)
        {
            dfs(v,cat);
            leaf=false;
        }
    }
    if(leaf==true)
        ans++;
}
main()
{
    int u,v;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    memset(visited,false,sizeof visited);
    dfs(1,0);
    cout<<ans;
}
