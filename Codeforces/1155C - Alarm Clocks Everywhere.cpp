#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 1234567
#define pii pair<ll,ll>
#define inf 123456789
#define inf1 123456789
using namespace std;
typedef long long ll;
ll x[sz],p[sz];
vector<ll>od;
set<ll>s;
map<ll,ll>mp;
int main()
{
    ll n,m;
    ll y,ans=0,ansj;
    cin>>n>>m>>x[0];
    for(ll i=1;i<n;i++)
    {
        cin>>x[i];
        x[i]-=x[0];
        if(x[i]%2!=0) od.push_back(x[i]);
    }
    for(ll i=1;i<=m;i++)
    {
        cin>>p[i];
        mp[p[i]]=i;
        s.insert(p[i]);
    }
    set<ll>::iterator it;
    y=x[0];
    ll odsz=od.size();
    for(it=s.begin();it!=s.end();it++)
    {
        ll vl=*it;
        if(vl%2==0 && odsz!=0) continue;
        else
        {
            for(ll i=1;i<n;i++)
            {
                if(x[i]%vl!=0)
                {
                    ///cout<<vl<<" -> "<<x[i]<<endl;
                    ans=0;
                    break;
                }
                else
                {
                    ansj=mp[vl];
                    ans=1;
                }
            }
            if(ans==1)
            {
                puts("YES");
                cout<<y<<" "<<ansj;
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}

