#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll sz=99;
ll dp[sz][sz],a[sz][5],n;
ll call(ll i,ll j)
{
    if(i>=n || j>=3) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    ll ans=123456789101112;
    for(ll k=0;k<3;k++)
    {
        if(j!=k)
        {
            ans=min(ans,a[i][j]+call(i+1,k));
        }
    }
    return dp[i][j]=ans;
}
main()
{
    ll t;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        memset(dp,-1,sizeof dp);
        ll mn=123456789101112;
        scanf("%lld",&n);
        for(ll i=0;i<n;i++) scanf("%lld%lld%lld",&a[i][0],&a[i][1],&a[i][2]);
        mn=min(call(0,0),call(0,1));
        mn=min(mn,call(0,2));
        printf("Case %lld: %lld\n",cs,mn);
    }
}
