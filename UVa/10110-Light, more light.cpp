#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(void)
{
    ll n,s,d;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        d=sqrt(n);
        if(d*d==n)
            printf("yes\n");
        else
            printf("no\n");
    }
}
