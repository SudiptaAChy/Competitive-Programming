#include<bits/stdc++.h>
#define sz 3999999
#define ll long long
using namespace std;
ll a[sz];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,t=0;
    cin>>n;
    for(ll i=0;i<n;i++) cin>>a[i];
    ll x=INT_MAX;
    for(ll i=n-1;i>=0;i--)
    {
        x=min(x-1,a[i]);
        x=max(0ll,x);
        t+=x;
    }
    cout<<t;
}
