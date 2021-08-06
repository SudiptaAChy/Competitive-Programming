/// $100, $50, $20, $10, and $5 notes and $2, $1, 50c, 20c, 10c and 5c
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000}; ///total = 11
ll make;
ll dp[13][30009];
ll a,b;
ll call(ll i,ll amount)
{
    if(i>=11)
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
    while(scanf("%lld.%lld",&a,&b))
    {
        make=a*100+b;
        if(make==0) break;
        printf("%3lld.%.2lld%17lld\n",a,b,call(0,make));
    }
}
