#include<bits/stdc++.h>
#define ll long long
ll cost[1009],weight[1009];
ll dp[1009][1009];
ll n;
using namespace std;
ll knap(ll i,ll w,ll cap)
{
    if(i==n) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    ll p1,p2;
    p1=0;
    p2=0;
    if(w+weight[i]<=cap)
        p1=cost[i]+knap(i+1,w+weight[i],cap);
    p2=knap(i+1,w,cap);
    return dp[i][w]=max(p1,p2);
}
main()
{
    ll t,N,g,val;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        ll ans=0;
        scanf("%lld",&N);
        n=N;
        for(ll i=0;i<n;i++)
            scanf("%lld%lld",&cost[i],&weight[i]);
        scanf("%lld",&g);
        while(g--)
        {
            memset(dp,-1,sizeof dp);
            scanf("%lld",&val);
            ans+=knap(0,0,val);
        }
        printf("%lld\n",ans);
    }
}
