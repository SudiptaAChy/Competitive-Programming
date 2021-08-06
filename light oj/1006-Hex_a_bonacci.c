#include<stdio.h>
#include<string.h>

int dp[100000];

long long a,b,c,d,e,f;

long long mod = 10000007;

long long hex(long long n)
{
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;

    if(dp[n]!=-1)
        return dp[n] % mod;

    else
    {
        dp[n] = ( (hex(n-1) % mod) + (hex(n-2) % mod) + (hex(n-3) % mod) + (hex(n-4) % mod) + (hex(n-5) % mod) + (hex(n-6) % mod) ) % mod;
        return dp[n];
    }
}

int main(void)
{
    int t,i=1;
    long long n;
    scanf("%d",&t);

    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);
        a=a%mod,b=b%mod,c=c%mod,d=d%mod,e=e%mod,f=f%mod;
        long long ans = hex(n);
        printf("Case %d: %lld\n",i++,ans);
    }

    return 0;
}
