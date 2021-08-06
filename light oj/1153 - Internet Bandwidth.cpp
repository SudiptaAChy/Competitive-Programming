#include<bits/stdc++.h>
#define sz 509
using namespace std;
vector< vector< pair<int,int> > >adj(sz);
int par[sz],wt[sz][sz];
bool bfs(int s,int t)
{
    bool vis[sz];
    memset(vis,false,sizeof vis);
    queue<int>q;
    q.push(s);
    vis[s]=true;
    par[s]=-1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            if(!vis[v] && wt[u][v]>0)
            {
                q.push(v);
                vis[v]=true;
                par[v]=u;
            }
        }
    }
    return (vis[t] == true);
}
int ans(int s,int t)
{
    int total=0;
    while(bfs(s,t))
    {
        int flow=INT_MAX;
        for(int v=t;v!=s;v=par[v])
        {
            int u=par[v];
            flow=min(flow,wt[u][v]);
        }
        for(int v=t;v!=s;v=par[v])
        {
            int u=par[v];
            wt[u][v]-=flow;
            wt[v][u]+=flow;
        }
        total+=flow;
    }
    return total;
}
int main(void)
{
    int ts;
    scanf("%d",&ts);
    for(int cs=1;cs<=ts;cs++)
    {
        int n,s,t,c,u,v,w;
        scanf("%d",&n);
        scanf("%d %d %d",&s,&t,&c);

        memset(wt,0,sizeof wt);
        vector< vector< pair<int,int> > >tv(n+2);
        swap(tv,adj);

        while(c--)
        {
            scanf("%d%d%d",&u,&v,&w);
            wt[u][v]+=w;
            wt[v][u]+=w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }
        printf("Case %d: %d\n",cs,ans(s,t));
    }
    return 0;
}
