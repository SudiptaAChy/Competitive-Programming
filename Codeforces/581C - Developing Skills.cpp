#include<bits/stdc++.h>
#define pii pair<ll,ll>
using namespace std;
typedef long long ll;
const ll sz=1234567;
bool cmp(ll a,ll b)
{
    return (a%10)>(b%10);
}
int main()
{
    ll n,k,a,ans=0;
    vector<ll>v;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),cmp);
    ll i=0;
    set<ll>ext;
    while(true)
    {
        if(i==n)
        {
            i=0;
        }
        if(v[i]==100)
        {
            ext.insert(i);
            if(ext.size()==n) break;
        }
        else {
            ll val=min(abs(100-v[i]),(10-(v[i]%10)));
            val=min(val,k);
            v[i]+=val;
            k-=val;
            if(k<=0) break;
        }
        i++;
    }
    for(ll i=0;i<n;i++) ans+=(v[i]/10);
    cout<<ans<<endl;
    ///main();
	return 0;
}

