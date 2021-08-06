#include<bits/stdc++.h>
#define ll long long
#define sz 1000009
using namespace std;
ll a[sz];
map<ll,ll>m;
vector<ll>v;
int main()
{
    ll n,k,t=0;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]=1;
    }
    for(ll i=1;i<=k;i++)
    {
        if(m[i]==0)
        {
            t+=i;
            if(t>k)
            {
                break;
            }
            else
            {
                v.push_back(i);
            }
        }
    }
    cout<<v.size()<<endl;
    ll x=v.size();
    for(ll i=0;i<x;i++) cout<<v[i]<<" ";
    return 0;
}

