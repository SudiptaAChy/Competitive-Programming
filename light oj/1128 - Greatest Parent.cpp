// O(qlogn)
#include<bits/stdc++.h>
#define mx 200009
#define pb push_back
using namespace std;
int level[mx]; /// level
int sp[mx][35]; /// sparse
int par[mx]; /// parent
int val[mx];
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
    int log=1;
    while(1)
    {
        int next=log+1;
        if((1<<next)>level[p]) break;
        log++;
    }
    for(int i=log;i>=0;i--)
    {
        if(sp[p][i]!=-1 && val[sp[p][i]]>=q)
            p=sp[p][i];
    }
    return p;
}
void lca_init(int N)
{
    memset(sp,-1,sizeof sp);
    for(int i=0;i<N;i++)
        sp[i][0]=par[i];
    for(int j=1;(1<<j)<N;j++)
    {
        for(int i=0;i<N;i++)
        {
            if(sp[i][j-1]!=-1)
            {
                sp[i][j]=sp[sp[i][j-1]][j-1];
            }
        }
    }
}
void slv()
{
    for(int i=0;i<mx;i++) adj[i].clear();
    val[0]=1;
    par[0]=0;
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<n;i++) {
        int u;
        scanf("%d %d",&u,&val[i]);
        adj[u].push_back(i);
    }
    dfs(0,0,0);
    lca_init(n);
    while (m--)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        printf("%d\n",lca_query(n,u,v));
    }
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin >> t;
    for(int cs=1;cs<=t;cs++) {
        printf("Case %d:\n",cs);
        slv();
    }
    return 0;
}
