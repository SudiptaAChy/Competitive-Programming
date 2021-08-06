#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000009];
main()
{
    ll ans=0;
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(ll i=1;i<=n;i++)
    {
        ans+=abs(a[i]-i);
    }
    cout<<ans;
}

