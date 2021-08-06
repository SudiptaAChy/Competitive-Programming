#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll sz=1234567,mn=1e18;
ll n,a[sz],b[sz];
main()
{
    cin>>n;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    ll ans=mn;
    for(ll j=1;j<n-1;j++)
    {
        ll pre=mn,suf=mn;
        for(ll i=0;i<j;i++)
            if(a[i]<a[j])
                pre=min(pre,b[i]);
        for(ll k=j+1;k<n;k++)
            if(a[j]<a[k]) suf=min(suf,b[k]);
        ans=min(ans,b[j]+pre+suf);
    }
    cout<<(ans<mn?ans:-1)<<endl;
}
