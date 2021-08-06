#include<stdio.h>

int total;

long long pa(long long n)
{
    long long a=0,r;
    while(n>0)
    {
        r=n%10;
        a=a*10+r;
        n/=10;
    }
    return a;
}
void pallin(long long n)
{
    long long s,a;
    a=pa(n);
    if(a!=n)
    {
        total++;
        s=a+n;
        pallin(s);
    }
    else
        printf("%d %lld\n",total,n);
}
main()
{
    long long t,n,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        total=0;
        pallin(n);
    }
}
