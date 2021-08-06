#include <bits/stdc++.h>
#define N 209
using namespace std;
typedef long long ll;
vector<int>adj[N];
bool vis[N],ok;
int color[N];
void reset(void)
{
    for(int i=0;i<N;i++)
    {
        adj[i].clear();
        vis[i]=0;
        color[i]=0;
    }
}
void dfs(int s)
{
    vis[s]=1;
    for(auto v : adj[s])
    {
        if(!vis[v])
        {
            if(color[s]==1) color[v]=2;
            else color[v]=1;
            dfs(v);
        }
        else
        {
            if(color[v]==color[s]) ok=0;
        }
    }
}
int main()
{
//    freopen("in.txt", "r", stdin);

    int n;
    while(scanf("%d",&n) && n)
    {
        reset();
        int m;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        ok=1;
        color[0]=1;
        dfs(0);
        if(ok) puts("BICOLORABLE.");
        else puts("NOT BICOLORABLE.");
    }

    return 0;
}
