#include<stdio.h>
#define ll long long
int sum(ll n)
{
    ll s=0,r;
    while(n>0)
    {
        r=n%10;
        s+=r;
        n/=10;
    }
    if(s<10)
        return s;
    else
        sum(s);
}
main(void)
{
    ll n;
    while(scanf("%lld",&n))
    {
        if(n==0) break;
        printf("%d\n",sum(n));
    }
}
