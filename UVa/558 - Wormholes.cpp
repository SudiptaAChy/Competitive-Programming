#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf=1e9;
const ll sz=123456;
ll dist[sz];
struct info {
    ll u,v,w;
} graph[sz];
void bellman(ll s,ll v,ll e)
{
    for(int i=0;i<=v;i++) dist[i]=inf;
    dist[s]=0;
    for(ll i=0;i<v-1;i++)
    {
        for(ll j=0;j<e;j++)
        {
            ll x,y,weight;
            x=graph[j].u;
            y=graph[j].v;
            weight=graph[j].w;
            dist[y]=min(dist[y],dist[x]+weight);
        }
    }
}
main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll v,e;
        cin>>v>>e;
        for(ll i=0;i<e;i++)
        {
            cin>>graph[i].u>>graph[i].v>>graph[i].w;
        }
        bellman(0,v,e);
        bool neg=false;
        for(ll i=0;i<e;i++)
        {
            ll x=graph[i].u;
            ll y=graph[i].v;
            ll weight=graph[i].w;
            if(dist[x]+weight<dist[y])
            {
                neg=true;
                break;
            }
        }
        if(neg) puts("possible");
        else puts("not possible");
    }
}
