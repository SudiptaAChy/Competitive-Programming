#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e18;
const ll sz=100009;
ll c[sz];
ll n;
map<int,string>mp[sz];
ll dp[sz][3];
ll fun(ll i,ll state)
{
    if(i==n+1) return 0;
    ll r1,r2;
    r1=r2=inf;
    if(dp[i][state]!=-1) return dp[i][state];
    if(mp[i][1] >= mp[i-1][state]) r1=fun(i+1,1);
    if(mp[i][2] >= mp[i-1][state]) r2=c[i] + fun(i+1,2);
    return dp[i][state] = min(r1,r2);
}
int main()
{
    /*
    1st state normal state
    2nd state reverse state
    */
   // freopen("in.txt","r",stdin);
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>c[i];
    for(ll i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        mp[i][1]=s;
        reverse(s.begin(),s.end());
        mp[i][2]=s;
    }
    ll ans=fun(1,1);
    if(ans == inf) puts("-1");
    else cout<<ans<<endl;
}

