#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fact[23];
void cal(void)
{
    fact[0]=1;
    for(ll i=1;i<=20;i++) fact[i]=i*fact[i-1];
}
main()
{
    cal();
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        vector<ll>v;
        ll n;
        scanf("%lld",&n);
        for(ll i=20;i>=0;i--)
        {
            if(fact[i]<=n)
            {
                v.push_back(i);
                n-=fact[i];
                if(n<=0) break;
            }
        }
        if(n!=0) printf("Case %d: impossible",cs);
        else
        {
            printf("Case %d: ",cs);
            sort(v.begin(),v.end());
            for(ll i=0;i<v.size()-1;i++) cout<<v[i]<<"!+";
            cout<<v[v.size()-1]<<"!";
        }
        printf("\n");
    }
}
