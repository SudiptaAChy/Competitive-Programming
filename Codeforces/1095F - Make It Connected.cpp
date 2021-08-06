#include <bits/stdc++.h>
#define sz 500005
using namespace std;
typedef long long ll;
ll mn=1e14;
ll idx;
ll a[sz];
struct info {
    ll u,v,w;
};
vector<info>e;
ll par[sz];
bool cmp(info a,info b)
{
    return a.w<b.w;
}
int Find(int x)
{
	if(par[x]==0)
		return x;
	return par[x]=Find(par[x]);
}
int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<mn)
        {
            mn=a[i];
            idx=i;
        }
    }
    for(ll i=1;i<=n;i++)
    {
        if(i!=idx)
        {
            info inf;
            inf.u=i;
            inf.v=idx;
            inf.w=a[i]+mn;
            e.push_back(inf);
        }
    }
    for(ll i=0;i<m;i++)
    {
        info inf;
        cin>>inf.u>>inf.v>>inf.w;
        e.push_back(inf);
    }
    ll ans=0;
    sort(e.begin(),e.end(),cmp);
    for(ll i=0;i<e.size();i++)
    {
        ll u=Find(e[i].u);
        ll v=Find(e[i].v);
        if(u!=v)
        {
            ans+=e[i].w;
            par[u]=v;
        }
    }
    cout<<ans<<endl;
    return 0;
}
