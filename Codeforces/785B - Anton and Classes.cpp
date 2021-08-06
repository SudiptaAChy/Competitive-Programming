#include<bits/stdc++.h>
#define ll long long
#define sz 1000009
using namespace std;
int main()
{
    ll n,m,x,y,u,v,ans=0,mx=0;
    ll m1=0,m2=INT_MAX,m3=0,m4=INT_MAX;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        m1=max(m1,x);
        m2=min(m2,y);
    }
    cin>>m;
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y;
        m3=max(m3,x);
        m4=min(m4,y);
    }
    mx=max(m1-m4,m3-m2);
    mx=max(mx,0LL);
    cout<<mx;
    return 0;
}
