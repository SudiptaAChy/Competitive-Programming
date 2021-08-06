#include<bits/stdc++.h>
#define sz 1234
using namespace std;
int n,m;
vector<int>adj[sz],ans;
bool vis[sz];
void st()
{
    for(int i=0;i<sz;i++)
    {
        adj[i].clear();
        vis[i]=false;
    }
    ans.clear();
}
void dfs(int s)
{
    vis[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {
        int v=adj[s][i];
        if(!vis[v])
            dfs(v);
    }
    ans.push_back(s);
}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m))
    {
        if(n==0 && m==0) break;
        st();
        for(int i=0;i<m;i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
        }
        for(int i=1;i<=n;i++)
        {
            if(!vis[i]) dfs(i);
        }
        for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
