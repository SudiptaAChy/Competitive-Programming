// O(qlogn)
#include<bits/stdc++.h>
#define mx 200009
#define pb push_back
using namespace std;
int level[mx]; /// level
int sp[mx][22]; /// sparse
int par[mx]; /// parent
vector<int>adj[mx];
void dfs(int from,int u,int dep)
{
    par[u]=from;
    level[u]=dep;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(v==from) continue;
        dfs(u,v,dep+1);
    }
}
int lca_query(int N,int p,int q)
{
    /// lvl p large lvl q small
    if(level[p]<level[q]) swap(p,q);
    int log=1;
    while(1)
    {
        int next=log+1;
        if((1<<next)>level[p]) break;
        log++;
    }
    for(int i=log;i>=0;i--)
    {
        if(level[p]-(1<<i)>=level[q])
            p=sp[p][i];
    }
    if(p==q) return p;
    for(int i=log;i>=0;i--)
    {
        if(sp[p][i]!=-1 && sp[p][i]!=sp[q][i])
        {
            p=sp[p][i];
            q=sp[q][i];
        }
    }
    return par[p];
}
void lca_init(int N)
{
    memset(sp,-1,sizeof sp);
    for(int i=1;i<=N;i++)
        sp[i][0]=par[i];
    for(int j=1;(1<<j)<=N;j++)
    {
        for(int i=1;i<=N;i++)
        {
            if(sp[i][j-1]!=-1)
            {
                sp[i][j]=sp[sp[i][j-1]][j-1];
            }
        }
    }
}
bool cmp(int a,int b)
{
    return level[a] > level[b];
}
int dis(int n,int u,int v)
{
    int lca=lca_query(n,u,v);
    return level[u]+level[v]-2*level[lca];
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n-1;i++) {
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1,1,0);
    lca_init(n);
    while (m--)
    {
        int k;
        cin >> k;
        int x[k+3];
        for(int i=0;i<k;i++) cin >> x[i];
        sort(x,x+k,cmp);
        int u=x[0];
        bool ok=1;
        for(int i=1;i<k;i++) {
            if(dis(n,u,x[i])-dis(n,u,lca_query(n,u,x[i])) > 1) 
            {
                ok=0;
                break;
            }
        }
        if(ok) puts("YES");
        else  puts("NO");
    }
    return 0;
}
