#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define INT_MAX 100000000000000
#define sz 29999
using namespace std;
vector<pii>adj[sz];
ll dis[sz];
void clr(void)
{
    for(ll i=0;i<sz;i++)
    {
        adj[i].clear();
        dis[i]=INT_MAX;
    }
}
void dijkstra(ll s)
{
    priority_queue< pii , vector<pii> , greater<pii> >pq;
    pq.push(make_pair(0,s));
    dis[s]=0;
    while(!pq.empty())
    {
        pii top=pq.top();
        pq.pop();
        ll d=top.first,u=top.second;
        for(auto it : adj[u])
        {
            ll v1=it.first,v2=it.second; /// node - weight
            ///cout<<"v1 = "<<v1<<" v2 = "<<v2<<endl;
            if(dis[u]+v2<dis[v1])
            {
                dis[v1]=dis[u]+v2;
                pq.push(make_pair(dis[v1],v1));
            }
        }
    }
}
main()
{
    ll t,n,m,s1,s2,u,v,w;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        clr();
        scanf("%lld%lld%lld%lld",&n,&m,&s1,&s2);
        while(m--)
        {
            scanf("%lld%lld%lld",&u,&v,&w);
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }
        dijkstra(s1);
        ///for(ll i=0;i<n;i++) cout<<dis[i]<<endl;
        if(dis[s2]==INT_MAX) printf("Case #%lld: unreachable\n",cs);
        else printf("Case #%lld: %lld\n",cs,dis[s2]);
    }
}
