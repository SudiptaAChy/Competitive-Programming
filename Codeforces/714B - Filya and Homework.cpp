#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll>s;
ll mx=0,mn=1234567890;
map<ll,ll>m;
main()
{
    ll n,v,t=0;
    cin>>n;
    while(n--)
    {
        cin>>v;
        mx=max(mx,v);
        mn=min(mn,v);
        s.insert(v);
        m[v]=1;
    }
    if(s.size()<=3)
    {
        if(s.size()==1 || s.size()==2)
        {
            puts("YES");
        }
        else
        {
            ll sum=mx+mn;
            if(sum%2!=0)
            {
                puts("NO");
            }
            else
            {
                sum/=2;
                if(m[sum]>0) puts("YES");
                else puts("NO");
            }
        }
    }
    else puts("NO");
}

