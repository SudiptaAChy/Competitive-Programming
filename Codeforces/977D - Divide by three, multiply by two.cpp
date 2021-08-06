#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll sz=1234567;
ll a[sz];
map<ll,bool>m;
vector<ll>v;
void dfs(ll n)
{
    if(m[n]==false) return;
    v.push_back(n);
    if(n%3==0)
    {
        dfs(n/3);
    }
    dfs(n*2);
}
main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]=true;
    }
    for(int i=0;i<n;i++)
    {
        dfs(a[i]);
        ///cout<<v.size()<<endl;
        if(v.size()==n) break;
        else v.clear();
    }
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}

