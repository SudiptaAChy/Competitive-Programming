#include<bits/stdc++.h>
#define ll long long
using namespace std;
int di(ll n)
{
    ll d,r,s=0;
    while(n>0)
    {
        r=n%10;
        if(r==4 || r==7)
            s++;
        n/=10;
    }
    return s;
}
main(void)
{
    ll n,k,i,v,s=0;
    scanf("%lld%lld",&n,&k);
    while(n--)
    {
        scanf("%lld",&v);
        if(di(v)<=k)
            s++;
    }
    printf("%lld",s);
}
