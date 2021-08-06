#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[3009][3009];
string a,b;
ll lcs(ll i,ll j)
{
    if(a[i]=='\0' || b[j]=='\0') return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    ll ans=0;
    if(a[i]==b[j]) ans=1+lcs(i+1,j+1);
    else
    {
        ll v1=0,v2=0;
        v1=lcs(i+1,j);
        v2=lcs(i,j+1);
        ans=max(v1,v2);
    }
    return dp[i][j]=ans;
}
main()
{
    while(getline(cin,a))
    {
        getline(cin,b);
        memset(dp,-1,sizeof dp);
        cout<<lcs(0,0)<<endl;
    }
}
