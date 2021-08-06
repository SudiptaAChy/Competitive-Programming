#include<bits/stdc++.h>
#define ll long long
#define mod 100000007
using namespace std;
ll n,make,c[1009],a[1009];
ll dp[1009][1009];
ll call(ll i,ll amount)
{
    ll ans=0;
    if(i>=n)
    {
        if(amount==make) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    for(ll j=0;j<=c[i];j++)
    {
        if((j*a[i]+amount)<=make)
        {
            ans+=call(i+1,j*a[i]+amount);
            ans=ans%mod;
        }
    }
    return dp[i][amount]=ans;
}
int main()
{
    ll t;
    cin>>t;
    for(ll cs=1;cs<=t;cs++)
    {
        memset(dp,-1,sizeof dp);
        cin>>n>>make;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>c[i];
        printf("Case %lld: %lld\n",cs,call(0,0));
    }
    return 0;
}
