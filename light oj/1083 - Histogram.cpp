#include<bits/stdc++.h>
#define mx 123456
typedef long long ll;
using namespace std;
ll a[mx],tree[mx*3],n;
ll cmp(ll x,ll y)
{
    return a[x]<a[y] ? x : y;
}
void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=b;
        return ;
    }
    ll left,right,mid;
    left=2*node;
    right=2*node+1;
    mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=cmp(tree[left],tree[right]);
}
ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return -1;
    if(b>=i && e<=j) return tree[node];
    ll left,right,mid,l,r;
    left=2*node;
    right=2*node+1;
    mid=(b+e)/2;
    l=query(left,b,mid,i,j);
    r=query(right,mid+1,e,i,j);
    if(l==-1) return r;
    if(r==-1) return l;
    return cmp(l,r);
}
ll area(ll b,ll e)
{
    if(b>e) return -1;
    if(b==e)
    {
        return a[b];
    }
    ll idx=query(1,1,n,b,e);
    //cout<<b<<" X "<<e<<endl;
    ll ans=max(area(b,idx-1),area(idx+1,e));
    return max(ans,(a[idx]*(e-b+1)));
}
main()
{
    ll t;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        scanf("%lld",&n);
        for(ll i=1;i<=n;i++) scanf("%lld",&a[i]);
        build(1,1,n);
        //for(ll i=1;i<=20;i++) cout<<i<<" "<<tree[i]<<endl;
        printf("Case %lld: %lld\n",cs,area(1,n));
        memset(tree,0,sizeof tree);
    }
}
