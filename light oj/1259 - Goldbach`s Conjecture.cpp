#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll sz=1e7;
vector<ll>v;
bool m[sz+5];
void pri(void)
{
    ///memset(m,true,sizeof m);
    m[1]=true;
    for(ll i=2;i*i<=sz;i++)
    {
        if(m[i]==false)
        {
            for(ll j=i*i;j<=sz;j+=i)
                m[j]=true;
        }
    }
    for(ll i=2;i<=sz;i++)
        if(m[i]==false)
            v.push_back(i);
}
int main()
{
    pri();
    ///cout<<v.size();
    ll t,n,sz=v.size();
    ///cout<<sz<<endl;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        ll to=0;
        scanf("%lld",&n);
        for(ll i=0;i<sz;i++)
        {
            if(v[i]<n)
            {
                ll x=n-v[i];
                if(m[x]==false)
                {
                    ///cout<<v[i]<<" "<<x<<endl;
                    to++;
                }
            }
            else break;
        }
        if(to%2==0) to/=2;
        else to=to/2+1;
        printf("Case %lld: %lld\n",cs,to);
    }
    return 0;
}
