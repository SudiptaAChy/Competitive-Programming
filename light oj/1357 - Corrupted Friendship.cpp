#include<bits/stdc++.h>
#define sz 123456
#define ll long long
using namespace std;
vector<ll>adj[sz];
bool vis[sz];
ll total,ab,n;
void pre(void)
{
    for(ll i=0;i<sz;i++)
    {
        vis[i]=false;
        adj[i].clear();
    }
    ab=0;
    total=0;
}
void dfs(ll s)
{
    vis[s]=true;
    total++;
    for(auto u : adj[s])
    {
        if(!vis[u])
        {
            dfs(u);
        }
    }
    ab+=(n-total);
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    ll t;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        ll u , v;
        scanf("%lld",&n);
        for(ll k=1;k<n;k++)
        {
            scanf("%lld %lld",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1);
        printf("Case %lld: %lld %lld\n",cs,total-1,ab);
        pre();
    }
    return 0;
}
