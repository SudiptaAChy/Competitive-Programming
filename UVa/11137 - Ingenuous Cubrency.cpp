#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll make,coin[30];
ll dp[30][10009];
void cube(void)
{
    for(int i=1;i<=21;i++)
        coin[i-1]=i*i*i;
}
ll money(ll i,ll amount)
{
    if(i>=21)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    ll r1=0,r2=0;
    if(amount-coin[i]>=0) r1=money(i,amount-coin[i]);
    r2=money(i+1,amount);
    return dp[i][amount]=r1+r2;
}
main()
{
    cube();
    memset(dp,-1,sizeof dp);
    while(scanf("%lld",&make)!=EOF)
    {
        printf("%lld\n",money(0,make));
    }
}
