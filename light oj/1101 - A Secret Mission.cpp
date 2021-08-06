#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define sf scanf
#define pf printf

using namespace std;
const int N = 5e4+99;

struct edge {
    int u,v,w;
} ;
vector< pair<int,int> >adj[N];
vector<edge>vv;
int level[N],n,m,par[N],pr[N];
int sp[N][30],sp1[N][30];

bool cmp(edge a,edge b)
{
    return a.w < b.w;
}
int fnd(int r)
{
    if(pr[r] == r) return r;
    return pr[r] = fnd(pr[r]);
}
void kruskal(void)
{
    sort(vv.begin(),vv.end(),cmp);
    for(int i=1;i<=n;i++) pr[i]=i;
    int cnt=0,s=0;
    for(int i=0;i<vv.size();i++)
    {
        int u=fnd(vv[i].u);
        int v=fnd(vv[i].v);
        if(u!=v)
        {
            pr[u]=v;
            cnt++;
            adj[vv[i].u].pb({vv[i].v,vv[i].w});
            adj[vv[i].v].pb({vv[i].u,vv[i].w});
            s+=vv[i].w;
            if(cnt==n-1) break;
        }
    }
}

void dfs(int u,int from,int dep)
{
    par[u]=from;
    level[u]=dep;
    for(auto it : adj[u]) {
        int v=it.first;
        int w=it.second;
        if(v == from) continue;
        sp1[v][0]=w;
        dfs(v,u,dep+1);
    }
}
void lca_init(void)
{
    memset(sp,-1,sizeof sp);
    for(int i=1;i<=n;i++) sp[i][0]=par[i];
    for(int j=1;(1<<j)<n;j++) {
        for(int i=1;i<=n;i++) {
            if(sp[i][j-1] != -1) {
                sp[i][j] = sp[sp[i][j-1]][j-1];
                sp1[i][j] = max(sp1[i][j-1], sp1[sp[i][j-1]][j-1]);
            }
        }
    }
}
int getLCA(int p,int q)
{
    if(p == q) return 0;
    if(level[p] < level[q]) swap(p,q);
    int log=1,mx=0;
    while (true)
    {
        int next=log+1;
        if((1<<next) > level[p]) break;
        log ++;
    }
    for(int i=log;i>=0;i--) {
        if(level[p]-(1<<i) >= level[q]) {
            mx=max(mx,sp1[p][i]);
            p=sp[p][i];
        }
    }
    if(p == q) return mx;
    for(int i=log;i>=0;i--) {
        if(sp[p][i]!=-1 && sp[p][i]!=sp[q][i]) {
            mx=max(mx, max(sp1[p][i],sp1[q][i]));
            p=sp[p][i];
            q=sp[q][i];
        }
    }
    mx=max(mx, max(sp1[p][0],sp1[q][0]));
    return mx;
}
void slv()
{
   memset(sp1,0,sizeof sp1);
   vv.clear();
   for(int i=0;i<N;i++) {
       adj[i].clear();
       level[i]=0;
   }
    sf("%d %d",&n,&m);
    for(int i=0;i<m;i++) {
        edge ee;
        sf("%d %d %d",&ee.u,&ee.v,&ee.w);
        vv.pb(ee);
    }
    kruskal();
    dfs(1,1,0);
    lca_init();
    int qq;
    sf("%d",&qq);
    while (qq--)
    {
        int x,y;
        sf("%d %d",&x,&y);
        pf("%d\n",getLCA(x,y));
    }
}
int main()
{
    int t;
    cin >> t;
    for(int cas=1;cas<=t;cas++) {
        printf("Case %d:\n",cas);
        slv();
    }
    return 0;
}
