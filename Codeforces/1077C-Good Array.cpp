#include<bits/stdc++.h>
#define ll long long
#define mx 5999999
using namespace std;
ll a[mx];
vector<ll>v;
map<ll,ll>b;
main()
{
    ll n,sum=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        sum+=a[i];
    }
    for(ll i=0;i<n;i++)
    {
        if((sum-a[i])%2==0)
        {
            ll d=(sum-a[i])/2;
            if(d==a[i])
            {
                if(b[d]>1) v.push_back(i+1);
            }
            else
            {
                if(b[d]>0) v.push_back(i+1);
            }
        }
    }
    cout<<v.size()<<endl;
    for(ll i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
