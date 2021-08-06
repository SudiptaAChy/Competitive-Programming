#include<bits/stdc++.h>
#define mx 1999999
#define pb push_back
using namespace std;
vector<int>adj[mx];
bool visited[mx];
bool fake;
int n;
void dfs(int st)
{
    int sz=adj[st].size();
    for(int i=0;i<sz;i++)
    {
        int v=adj[st][i];
        if(visited[v]==true)
        {
            fake = true;
        }
        else
        {
            visited[v]=true;
            dfs(v);
        }
    }
}
main(void)
{
    memset(visited,false,sizeof visited);
    int m,u,v;
    cin>>n>>m;
    while(m--)
    {
        cin>>u>>v;
        adj[u].pb(v);
        ///adj[v].pb(u);
    }
    visited[1]=true;
    fake = false;
    dfs(1);
    int ache=1;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==false)
        {
            ache=0;
            break;
        }
    }
    if(fake==true || ache==0) cout<<"NO";
    else cout<<"YES";
}
