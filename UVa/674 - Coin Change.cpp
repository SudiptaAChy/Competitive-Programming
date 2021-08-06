#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll coin[]={1,5,10,25,50};
ll make;
ll dp[6][7900];
ll call(ll i,ll amount)
{
    if(i>=5)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    ll r1=0,r2=0;
    if(amount-coin[i]>=0) r1=call(i,amount-coin[i]);
    r2=call(i+1,amount);
    dp[i][amount]=r1+r2;
    return dp[i][amount];
}
main()
{
    memset(dp,-1,sizeof dp);
    while(scanf("%lld",&make)!=EOF)
    {
        if(make==0) printf("1\n");
        else if(make<0) printf("0\n");
        else
        {
            printf("%lld\n",call(0,make));
        }
    }
}
