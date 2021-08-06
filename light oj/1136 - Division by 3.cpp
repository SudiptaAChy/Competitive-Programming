#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll digit(ll n)
{
    ll tri=n/3;
    ll div1=tri*2;
    if(n%3==2) div1++;
    return div1;
}
main()
{
    ll t;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        ll ans=digit(b)-digit(a-1);
        printf("Case %lld: %lld\n",cs,ans);
    }
}
