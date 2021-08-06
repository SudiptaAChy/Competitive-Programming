#include<bits/stdc++.h>
#define PI acos(-1.0)
#define pii pair<ll,char>
using namespace std;
typedef long long ll;
ll a[1234567];
vector<ll>v;
map<char,ll>m;
int main()
{
    ll n,k,ans=0;
    string s;
    cin>>n>>k;
    for(ll i=0;i<n;i++) cin>>a[i];
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        v.push_back(a[i]);
        if(s[i]==s[i+1])
        {
            ll j=i+1;
            while(j<n && s[i]==s[j])
            {
                v.push_back(a[j]);
                j++;
            }
            i=j-1;
        }
        sort(v.rbegin(),v.rend());
        for(ll j=0;j<k && j<v.size();j++) ans+=v[j];
        v.clear();
    }
    cout<<ans;
    return 0;
}
