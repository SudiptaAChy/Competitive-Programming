#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000009],q[1000009];
main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    ll n,m,q,s=0;
    cin>>n;
    for(ll i=1;i<=n;i++) {cin>>a[i]; s+=a[i];}
    sort(a+1,a+n+1);
//    for(ll i=1;i<=n;i++) cout<<a[i]<<" ";
//    cout<<endl;
    cin>>m;
    while(m--)
    {
        cin>>q;
        cout<<s-a[n-q+1]<<endl;
    }
}
