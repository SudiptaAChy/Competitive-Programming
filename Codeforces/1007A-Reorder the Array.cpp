#include<bits/stdc++.h>
#define ll long long
#define sz 1000009
using namespace std;
ll a[sz],s[sz],b[sz];
map<ll,ll>mp;
ll mx;
main()
{
    ios_base::sync_with_stdio(0);
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        mx=max(mx,mp[a[i]]);
    }
    cout<<n-mx;
}
