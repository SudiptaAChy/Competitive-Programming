#include<bits/stdc++.h>
#define N 5000001
using namespace std;
typedef long long ll;
bool vis[N+5];
ll total[N+5];
ll sum[N+5];
vector<ll>prime;
void seive(void)
{
    for(ll i=2;i*i<N;i++)
    {
        if(!vis[i])
        {
            for(ll j=i*i;j<N;j+=i) vis[j]=1;
        }
    }
    for(ll i=2;i<N;i++)
    {
        if(!vis[i]) prime.push_back(i);
    }
}
void div(ll n)
{
    ll cnt=0;
    ll tmp=n;
    for(ll i=0;(i<prime.size() && prime[i]*prime[i]<=n);i++)
    {
        while(n%prime[i]==0)
        {
            if(total[n]!=0)
            {
                total[tmp]=total[n]+cnt;
                return ;
            }
            cnt++;
            n/=prime[i];
        }
    }
    if(n>1) cnt++;
    total[tmp]=cnt;
}
int main(void)
{
    seive();
    total[0]=0;
    total[1]=0;
    sum[0]=0;
    sum[1]=0;
    for(ll i=2;i<N;i++)
    {
        div(i);
    }
    for(ll i=2;i<N;i++) sum[i] = sum[i-1]+total[i];

    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",sum[a]-sum[b]);
    }
    return 0;
}
