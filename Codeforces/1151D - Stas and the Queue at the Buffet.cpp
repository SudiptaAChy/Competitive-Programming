#include<bits/stdc++.h>
#define ll long long
#define sz 999999999999999999
#define pii pair<ll,ll>
using namespace std;
vector< pii >v;
bool cmp1(pii a,pii b)
{
    return a.second<b.second;
}
bool cmp2(pii a,pii b)
{
    return a.first<b.first;
}
bool cmp3(pii a,pii b)
{
    return (a.first-a.second)>(b.first-b.second);
}
main()
{
    ll n,x,y;
    ll mn=sz,ans=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y,v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),cmp1);
    for(ll i=0;i<n;i++)
    {
        ll j=i+1;
        ans+=((v[i].first*(j-1))+(v[i].second*(n-j)));
    }
    mn=min(mn,ans);
    ans=0;
    sort(v.begin(),v.end(),cmp2);
    for(ll i=0;i<n;i++)
    {
        ll j=i+1;
        ans+=(v[i].first*(j-1))+(v[i].second*(n-j));
    }
    mn=min(mn,ans);
    ans=0;
    sort(v.begin(),v.end(),cmp3);
    for(ll i=0;i<n;i++)
    {
        ll j=i+1;
        ans+=(v[i].first*(j-1))+(v[i].second*(n-j));
    }
    mn=min(mn,ans);
    cout<<mn;
}
