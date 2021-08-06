#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
using namespace std;
const int N = 2e4+9;
vector< pair<int,int> >adj[N];
int level[N],dis[N],n,par[N],sp[N][30];
bool vis[N];
void dfs(int u,int from)
{
    par[u]=from;
    vis[u]=true;
    for(auto it : adj[u]) {
        int v=it.first;
        int w=it.second;
        if(!vis[v]) {
            dis[v]=dis[u]+w;
            level[v]=level[u]+1;
            dfs(v,u);
        }
    }
}
void lca_init(void)
{
    memset(sp,-1,sizeof sp);
    for(int i=1;i<=n;i++) sp[i][0]=par[i];
    for(int j=1;(1<<j)<=n;j++) {
        for(int i=1;i<=n;i++) {
            if(sp[i][j-1] != -1) {
                sp[i][j]=sp[sp[i][j-1]][j-1];
            }
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=0;j<5;j++) cout<<sp[i][j]<<" ";
    //     cout<<endl;
    // }
}
int getLCA(int p,int q)
{
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
int getKTH(int p,int q,int k,int lca)
{
    int d,log,i;
    if(lca == p) {
        d=level[q]-level[p]+1;
        swap(p,q);
        k=d-k+1;
    } else if(lca == q) ; // nothing to do in this segment
    else {
        if(level[p]-level[lca]+1 < k) //node lies in the path of q so will count from q instead of p
        {
            d=level[p]+level[q]-2*level[lca]+1;
            k=d-k+1;
            swap(p,q);
        }
    }
    for(log=1;(1<<log)<=level[p];log++) ;
    log--,k--;
    for(i=log;i>=0;i--) {
        if((1<<i) <= k) {
            p=sp[p][i];
            k -= (1<<i);
        }
    }
    return p;
}
void slv()
{
    for(int i=0;i<N;i++) {
        adj[i].clear();
        level[i]=dis[i]=0;
        vis[i]=false;
    }
    cin >> n;
    for(int i=0;i<n-1;i++) {
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }
    dis[1]=0,level[1]=0;
    dfs(1,-1);
    //for(int i=1;i<=n;i++) cout<<i<<" X "<<level[i]<<" X "<<dis[i]<<endl;
    lca_init();
    char ch[50];
    int x,y,z;
    while (scanf("%s",ch))
    {
        if(ch[1]=='O') break;
        cin >> x >> y;
        int lca = getLCA(x,y);
        if(ch[1]=='T') {
            cin >> z;
            int ans=getKTH(x,y,z,lca);
            cout<<ans<<endl;
        } else {
            int ans=dis[x]+dis[y]-2*dis[lca];
            cout<<ans<<endl;
        }
    }
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    ll t;
    cin >> t;
    while (t--) slv();
    return 0;
}
