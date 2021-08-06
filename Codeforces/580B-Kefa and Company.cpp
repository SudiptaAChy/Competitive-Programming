#include<bits/stdc++.h>
#define mx 1000009
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
vector< pair<ll,ll> >v;
ll a[mx];
main()
{
    ll n,d;
    ll m,s,f=0,ma=0;
    cin>>n>>d;
    for(ll i=0;i<n;i++)
    {
        cin>>m>>s;
        v.pb(mp(m,s));
    }
    sort(v.begin(),v.end());
    ll sz=v.size();
//    cout<<endl;
//    for(ll i=0;i<sz;i++)
//        cout<<v[i].first<<" "<<v[i].second<<endl;
//    cout<<endl;
    ll j=0;
    for(ll i=0;i<sz;i++)
    {
        for( ;j<sz;j++)
        {
            if(abs(v[i].first-v[j].first)<d)
            {

                f+=v[j].second;
                ///cout<<"i = "<<i<<" j = "<<j<<" f= "<<f<<endl;
            }
            else
                break;
        }
        ma=max(f,ma);
        f-=v[i].second;
    }
    cout<<ma;
}

