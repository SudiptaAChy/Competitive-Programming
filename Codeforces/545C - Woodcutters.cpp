#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector< pair<ll,ll> >v;
int main()
{
    ll n,x,y,t=0,seg;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        {
            t++;
            seg=v[i].first;
        }
        else if(i==n-1)
        {
            t++;
        }
        else if(v[i].first-v[i].second>seg)
        {
            t++;
            seg=v[i].first;
        }
        else if(v[i].first+v[i].second<v[i+1].first)
        {
            t++;
            seg=v[i].first+v[i].second;
        }
        else
            seg=v[i].first;
    }
    cout<<t;
    return 0;
}

