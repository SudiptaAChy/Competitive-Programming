#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll>m;
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        m.clear();
        ll ans=0,n,a,cnt=0,b=0;
        scanf("%lld",&n);
        for(ll i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            if(m[a] != 0)
            {
                b=max(b,m[a]);
                cnt=i-b-1;
            }
            cnt++;
            m[a]=i;
            ans=max(ans,cnt);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
