#include<bits/stdc++.h>
#define ll long long
#define mx 399999
using namespace std;
ll a[mx],b[mx];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,d;
    cin>>n>>m;
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    while(m--)
    {
        cin>>d;
        ll ans=upper_bound(a,a+n,d)-a;
        cout<<ans<<" ";
    }
    return 0;
}

