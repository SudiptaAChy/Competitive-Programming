#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll coin[]={1,5,10,25,50};
ll dp[7][40009];
ll n;
ll change(ll i,ll amount)
{
    if(i>=5)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    ll p1=0,p2=0;
    if(amount-coin[i]>=0) p1=change(i,amount-coin[i]);
    p2=change(i+1,amount);
    return dp[i][amount]=p1+p2;
}
main()
{
    memset(dp,-1,sizeof dp);
    while(scanf("%lld",&n)!=EOF)
    {
        ll man=change(0,n);
        if(man>1)
            printf("There are %lld ways to produce %lld cents change.\n",man,n);
        else
            printf("There is only %lld way to produce %lld cents change.\n",man,n);
    }
}
