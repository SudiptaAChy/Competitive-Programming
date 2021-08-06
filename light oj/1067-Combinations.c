#include <stdio.h>
long long fact[1000001];
long long bmod(long long a,long long b,long long m)
{
    long long x;
    if(b==0)
        return 1;
    if(b%2==0) {
        x=bmod(a,b/2,m);
        return (x*x)%m;
    }
    else
    {
        x=bmod(a,b-1,m);
        return (a*x)%m;
    }
}

int main(void)
{
    int t,i=0;
    long long n,r,m=1000003,j;

    fact[1]=1;
    for(j=2;j<=1000001;j++)
        fact[j]=(fact[j-1]*j) % m;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&r);
        if(n==r || r==0)
            printf("Case %d: 1\n",++i);
        else
        {
            long long modin = ((fact[r]%m) * (fact[n-r]%m))%m;
            long long ncr=(fact[n]*bmod(modin,m-2,m))%m;
            printf("Case %d: %lld\n",++i,ncr);
        }
    }

    return 0;
}
