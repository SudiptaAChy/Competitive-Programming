#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[3999999],b[3999999];
set<ll>s;
vector<ll>v;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for(ll i=1;i<n;i++)
    {
        cin>>a[i];
        b[i]=(n-i)*a[i];
    }
    ll x,sum;
    sum=n*(n+1);
    sum/=2;
    for(ll i=1;i<n;i++)
    {
        sum=sum-b[i];

    }
    x=sum/n;
    s.insert(x);
    v.push_back(x);
    for(ll i=1;i<n;i++)
    {
        x+=a[i];
        v.push_back(x);
        s.insert(x);
    }
    ll sz=v.size();
    if(*s.begin()<=0 || s.size()!=n)
    {
        cout<<"-1";
        return 0;
    }
    for(ll i=0;i<sz;i++)
        cout<<v[i]<<" ";
	return 0;
}
