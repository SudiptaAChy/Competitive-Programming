#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        ll n,m,dig=1;
        ll ans;
        scanf("%lld%lld",&n,&m);
        ll r=m;
        while(1)
        {
            if(m%n==0) break;
            m=(m*10+r)%n;
            dig++;
        }
        printf("Case %d: %lld\n",cs,dig);
    }
    return 0;
}
