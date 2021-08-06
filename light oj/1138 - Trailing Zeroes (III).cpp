#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll zro(ll n)
{
    ll i,t=0;
    for(i=5;(n/i)>0;i*=5)
    {
        t+=n/i;
    }
    return t;
}
ll bisect(ll q)
{
    ll lo=5,mid,hi=1000000000;
    while(lo<hi)
    {
        mid=(lo+hi)/2;
        if(zro(mid)>=q)
            hi=mid;
        else if(zro(mid)<q)
            lo=mid+1;
    }
    return lo;
}
int main()
{
    ll ans=400000015;
    ll t,q;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        scanf("%lld",&q);
        ll ans=bisect(q);
        if(zro(ans)!=q)
            printf("Case %lld: impossible\n",cs);
        else
            printf("Case %lld: %lld\n",cs,ans);
    }
    return 0;
}
