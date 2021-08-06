#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 123456
#define pii pair<ll,ll>
#define inf 123456789
#define inf1 123456789
using namespace std;
typedef long long ll;
ll ak[sz];
ll dis[sz];
vector< pii >v[sz];
void dijkstra(ll s)
{
    priority_queue< pii, vector<pii> , greater<pii> >pq;
    pq.push(make_pair(0,s));
    dis[s]=0;
    while(!pq.empty())
    {
        pii top=pq.top();
        pq.pop();
        ll d=top.first,u=top.second;
        for(auto it : v[u])
        {
            ll v1=it.first,v2=it.second;
            ///cout<<"v1 = "<<v1<<endl;
            if(dis[u]+v2<dis[v1])
            {
                dis[v1]=dis[u]+v2;
                pq.push(make_pair(dis[v1],v1));
            }
        }
    }
}
int main()
{
    ll n,m,k,x,y,w;
    sf("%lld%lld%lld",&n,&m,&k);
    while(m--)
    {
        sf("%lld%lld%lld",&x,&y,&w);
        v[x].push_back(make_pair(y,w));
        v[y].push_back(make_pair(x,w));
    }
    for(ll i=0;i<k;i++) sf("%lld",&ak[i]);
    if(k==0)
    {
        pf("-1");
        return 0;
    }
    ll ans=inf;
    for(ll i=0;i<k;i++)
    {
        memset(dis,inf,sizeof dis);
        dijkstra(ak[i]);
        for(ll j=1;j<=n;j++)
        {
            if(ak[i]!=j)
            {
                ans=min(ans,dis[j]);
            }
        }
    }
    if(ans==inf) pf("-1");
    else cout<<ans<<endl;
    return 0;
}

