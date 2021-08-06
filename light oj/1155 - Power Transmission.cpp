#include<bits/stdc++.h>
#define sz 1234
#define inf INT_MAX;
using namespace std;
typedef long long ll;
vector<vector<int> >adj(sz);
int cost[sz];
int wt[sz][sz];
int par[sz];
bool bfs(int s,int t)
{
    bool vis[sz];
    memset(vis,0,sizeof vis);
    memset(par,-1,sizeof par);
    par[s]=0;
    vis[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if(!vis[v] && wt[u][v]>0)
            {
                vis[v]=1;
                par[v]=u;
                q.push(v);
            }
        }
    }
    return vis[t];
}
int maxflow(int s,int t)
{
    int total=0;
    while(bfs(s,t))
    {
        int flow=inf;
        for(int v=t;v!=s;v=par[v])
        {
            int u = par[v];
            flow=min(flow,wt[u][v]);
        }
        for(int v=t;v!=s;v=par[v])
        {
            int u = par[v];
            wt[u][v]-=flow;
            wt[v][u]+=flow;
        }
        total+=flow;
    }
    return total;
}
int main()
{
    int tes;
    cin>>tes;
    for(int cs=1;cs<=tes;cs++)
    {
        memset(wt,0,sizeof wt);
        int n;
        scanf("%d",&n);
        vector<vector<int> >v(sz);
        swap(adj,v);
        for(int i=1;i<=n;i++)
        {
            int u=2*i-1;
            int v=u+1;
            adj[u].push_back(v);
            adj[v].push_back(u);
            scanf("%d",&wt[u][v]);
        }
        int m;
        scanf("%d",&m);
        while(m--)
        {
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            u=2*u;
            v=2*v-1;
            adj[u].push_back(v);
            adj[v].push_back(u);
            wt[u][v]+=w; ///dslkfjlsdfklsdf
        }
        int B,D;
        scanf("%d%d",&B,&D);
        int sink=2*(n+1);
        for(int i=0;i<B;i++)
        {
            int val;
            scanf("%d",&val);
            val=2*val-1;
            adj[0].push_back(val);
            adj[val].push_back(0);
            wt[0][val]=inf;
        }
        for(int i=0;i<D;i++)
        {
            int val;
            scanf("%d",&val);
            val=val*2;
            adj[sink].push_back(val);
            adj[val].push_back(sink);
            wt[val][sink]=inf;
        }
        printf("Case %d: %d\n",cs,maxflow(0,sink));
    }
    return 0;
}

