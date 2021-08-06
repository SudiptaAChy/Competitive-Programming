#include<bits/stdc++.h>
#define sf(a) scanf("%lld",&a);
#define pf(a) printf("%lld\n",a);
using namespace std;
typedef long long ll;
const ll N = 2e6+99;
const ll block=sqrt(N)+1;
struct query {
    ll l,r,id;
} q[N];
ll a[N],cnt[N],ans=0LL,Q,n,output[N];
bool cmp(query a, query b)
{
    if(a.l/block == b.l/block) return a.r < b.r;
    else return a.l/block < b.l/block;
}
void add(ll x) 
{
	ll c = cnt[x];
	ans += x * (2LL*c + 1LL);
	cnt[x]++;
}
void remove(ll x) 
{
	ll c = cnt[x];
	ans -= x * (2LL*c - 1LL);
	cnt[x]--;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    sf(n);
    sf(Q);
    for(ll i=0;i<n;i++) sf(a[i]); 
    for(ll i=0;i<Q;i++)
    {
        sf(q[i].l);
        sf(q[i].r);
        q[i].id=i;
        q[i].l--;
        q[i].r--;
    }
    sort(q,q+Q,cmp);
    ll l=0,r=-1;
    for(ll i=0;i<Q;i++)
    {
        ll lo=q[i].l,hi=q[i].r;
        while(l>lo) add(a[--l]);
        while(r<hi) add(a[++r]);
        while(l<lo) remove(a[l++]);
        while(r>hi) remove(a[r--]);
        output[q[i].id]=ans;
    }
    for(ll i=0;i<Q;i++) pf(output[i]);
    return 0;
}