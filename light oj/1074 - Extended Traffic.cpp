#include<bits/stdc++.h>
#define sz 12345
using namespace std;
typedef long long ll;
const ll inf=1e12;
ll dis[sz],d[sz];
struct info {
    ll u,v,w;
} graph[sz];
void bellmanford(ll s,ll n,ll e)
{
    for(ll i=1;i<=n;i++) d[i]=inf;
    d[s]=0;
    for(ll i=1;i<=n-1;i++)
    {
        for(ll j=1;j<=e;j++)
        {
            ll x=graph[j].u;
            ll y=graph[j].v;
            ll z=graph[j].w;
            if(d[x]!=inf && d[x]+z<d[y])
            {
                d[y]=d[x]+z;
            }
        }
    }
}
main()
{
    ll t;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        printf("Case %lld:\n",cs);
        ll n,e,q,x;
        scanf("%lld",&n);
        for(ll i=1;i<=n;i++) scanf("%lld",&dis[i]);
        scanf("%lld",&e);
        for(ll i=1;i<=e;i++)
        {
            scanf("%lld%lld",&graph[i].u,&graph[i].v);
            ll val=dis[graph[i].v]-dis[graph[i].u];
            graph[i].w=val*val*val;
        }
        bellmanford(1,n,e);
        scanf("%lld",&q);
        while(q--)
        {
            scanf("%lld",&x);
            if(d[x]<3 || d[x]==inf) puts("?");
            else printf("%lld\n",d[x]);
        }
    }
}
