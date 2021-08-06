#include<bits/stdc++.h>
#define ll long long
#define sz 1234
using namespace std;
vector<int>adj[sz];
int total;
int cost[sz][sz];
bool vis[sz];
void res()
{
    for(int i=0;i<sz;i++) adj[i].clear();
    memset(cost,0,sizeof cost);
    memset(vis,false,sizeof vis);
}
void bfs(int s,int prev)
{
    if(s!=1) vis[s]=true;
    bool in=0;
    for(int i=0;i<adj[s].size();i++)
    {
        int v=adj[s][i];
        if(!vis[v] && v!=prev)
        {
            in=1;
            total+=cost[s][v];
            //cout<<v<<" X "<<s<<endl;
            bfs(v,s);
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        total=0;
        res();
        int n;
        scanf("%d",&n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[v][u]=w;
            ans+=w;
        }
        bfs(1,0);
        printf("Case %d: %d\n",cs,min(total,ans-total));
    }
    return 0;
}
