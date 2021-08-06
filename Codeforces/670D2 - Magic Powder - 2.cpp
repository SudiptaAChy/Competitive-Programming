#include<bits/stdc++.h>
#define pii pair<ll,ll>
using namespace std;
typedef long long ll;
const ll sz=1234567;
ll a[sz],b[sz];
ll n,k,ans;
int main()
{
    cin>>n>>k;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    ll l=0,r=2000000000;
    while(l<=r)
    {
        ll tmpans=0;
        ll mid=(l+r)/2;
        for(ll i=0;i<n;i++)
        {
            ll x=a[i]*mid;
            if(x>=b[i])
                tmpans+=x-b[i];
            if(tmpans>k) break;
        }
        if(tmpans<=k)
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
	return 0;
}
