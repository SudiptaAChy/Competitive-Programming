#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[300][300];
ll dp[300][300];
ll t,n,row;
ll rock(ll i,ll j)
{
    if(i>0 && i<=2*n-1 && j>0 && j<=n)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        ll ret=-10e12;
        ret=max(ret,a[i][j]+rock(i+1,j));
        if(i+1<=n)
            ret=max(ret,a[i][j]+rock(i+1,j+1));
        else
            ret=max(ret,a[i][j]+rock(i+1,j-1));
        return dp[i][j]=ret;
    }
    else return 0;
}
main()
{
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        memset(a,-1,sizeof a);
        memset(dp,-1,sizeof dp);
        scanf("%lld",&n);
        row=2*n-1;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=i;j++)
                scanf("%lld",&a[i][j]);
        }
        for(ll i=n+1;i<=2*n-1;i++)
            for(ll j=1;j<=2*n-i;j++)
                scanf("%lld",&a[i][j]);
        printf("Case %lld: %lld\n",cs,rock(1,1));
    }
}
