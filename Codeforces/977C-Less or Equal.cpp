#include<bits/stdc++.h>
#define ll long long
#define mx 1999999
using namespace std;
ll a[mx];
main()
{
    ll n,k,ans,p1,p2;
    cin>>n>>k;
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(k==0)
    {
        if(a[0]==1)
            cout<<"-1";
        else
            cout<<--a[0];
        return 0;
    }
    if(a[k-1]==a[k])
        ans=-1;
    else
        ans=a[k-1];
    cout<<ans;
}
