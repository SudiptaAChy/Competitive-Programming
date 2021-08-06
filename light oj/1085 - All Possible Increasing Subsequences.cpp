#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
typedef long long ll;
 
const int N = 4e5+9;
const ll mod=1000000007;
ll n,a[N],tree[N];
bool cmp(pair<ll,ll>a, pair<ll,ll>b)
{
    if(a.first==b.first) return a.second>b.second;
    else return a.first<b.first;
}
ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(b>e || j<b || i>e) return 0LL;
    if(b>=i && e<=j) return tree[node];
    ll mid=(b+e)/2LL;
    ll q1=query(2*node,b,mid,i,j);
    ll q2=query(2*node+1,mid+1,e,i,j);
    return (q1+q2)%mod;
}
void  update(int node,int b,int e,int i,int j,int val)
 {
    if(b>e  ||j<b || i>e)
        {
        return ;
        }
        else if(b==e  && b==i)
        {
        tree[node]=(tree[node]+val)%mod;
        return ;
    }
    int mid=(b+e)/2;
    update(2*node,b,mid,i,j,val);
    update(2*node+1,mid+1,e,i ,j,val);
    tree[node]=(tree[2*node]+tree[2*node+1])%mod;
 }
int main()
{
    int t;
    cin >> t;
    for(int cs=1;cs<=t;cs++)
    {
        sf("%lld",&n);
        memset(tree,0,sizeof tree);
        vector< pair<ll,ll> >v;
        for(int i=0;i<n;i++) {
            sf("%lld",&a[i]);
            v.push_back({a[i],i+1});
        }
        sort(v.begin(),v.end(),cmp);
        update(1,0,n,0,0,1);
        for(auto it : v)
        {
            //cout<<it.first<<" "<<it.second<<endl;
            ll cnt = query(1,0,n,0,it.second-1);
            update(1,0,n,it.second,it.second,cnt);
        }
        ll ans=query(1,0,n-1,1,n);
        pf("Case %d: %lld\n",cs,ans);
    }
    return 0;
}