#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double lg[1234567];
main()
{
    for(ll i=1;i<=1000000;i++)
        lg[i]=lg[i-1]+log10(i);
    ll t;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        ll n,b;
        scanf("%lld%lld",&n,&b);
        ll ans=floor(lg[n]/log10(b))+1;
        printf("Case %lld: %lld\n",cs,ans);
    }
}
