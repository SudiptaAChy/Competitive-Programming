#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll,ll>
#define sz 3999999
using namespace std;
pi a[sz];
bool cmp(pi a,pi b)
{
    return a.second<b.second;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<n;i++) cin>>a[i].first>>a[i].second;
    sort(a,a+n,cmp);
    ll sum=0,ma=-10e12;
    set<pi>s;
    set<pi>::iterator it;
    for(ll i=n-1;i>=0;i--)
    {
        sum+=a[i].first;
        s.insert(make_pair(a[i].first,i));
        while(s.size()>k)
        {
            it=s.begin();
            sum-=it->first;
            s.erase(it);
        }
        ma=max(ma,sum*a[i].second);
    }
    cout<<ma;
	return 0;
}
