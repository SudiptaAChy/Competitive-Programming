#include<bits/stdc++.h>
#define N 100009
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll dp[N+10];
int main(void)
{
    ll t,k;
    cin>>t>>k;

    for(ll i=0;i<k;i++) dp[i]=1;
    for(ll i=k;i<N;i++) dp[i]=(dp[i-1]+dp[i-k])%mod;
    for(ll i=1;i<N;i++) dp[i]=(dp[i]+dp[i-1])%mod;

    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=(dp[b]-dp[a-1]+mod)%mod;
        cout<<ans<<endl;
    }
    return 0;
}
