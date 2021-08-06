#include<bits/stdc++.h>
#define N 1234567
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(scanf("%lld",&n) && n)
    {
        priority_queue<ll>pq;
        n=abs(n);
        ll tmp=n;
        if(n%2==0)
        {
            pq.push(2);
            while(n%2==0)
            {
                n/=2;
            }
        }
        for(ll i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                pq.push(i);
                while(n%i==0)
                {
                    n/=i;
                }
            }
        }
        if(n>2) pq.push(n);
        if(pq.size()>=2)
        {
            printf("%lld\n",pq.top());
        }
        else puts("-1");
    }
    return 0;
}
