#include<bits/stdc++.h>
#define ll long long
#define sf scanf
#define pf printf
#define mx 1000009
#define mod 1073741824
using namespace std;
ll divi[mx];
void d(void)
{
    for(ll i=1;i<=1000000;i++)
    {
        for(ll j=i;j<=1000000;j+=i)
            divi[j]++;
    }
}
main()
{
    d();
    ll a,b,c,sum=0;
    sf("%lld%lld%lld",&a,&b,&c);
    for(ll i=1;i<=a;i++)
    {
        for(ll j=1;j<=b;j++)
        {
            for(ll k=1;k<=c;k++)
            {
                ll num=i*j*k;
                sum+=divi[num];
                sum%=mod;
            }
        }
    }
    pf("%lld",sum);
}
